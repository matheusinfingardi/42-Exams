#include <stdlib.h>

int     ft_abs(int nbr)
{
    if (nbr < 0)
        nbr *= -1;
    return (nbr);
}

int     *ft_range(int start, int end)
{
    int     *tab;
    int     len;
    int     i = 0;

    len = ft_abs(end - start) + 1;

    tab = (int *)malloc(sizeof(int) * len);

    if (start <= end)
    {
        while (i < len)
        {
            tab[i] = start;
            start++;
            i++;
        }
    }
    else if (start > end)
    {
        while (i < len)
        {
            tab[i] = start;
            start--;
            i++;
        }
    }
    return (tab);
}



#include <stdio.h>

int main()
{
    int *range;
    int start = -2147483640;
    int end = -2147483648;
    int i = 0;

    range = ft_range(start, end);
    

    while (i < ft_abs(end - start) + 1)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");
}