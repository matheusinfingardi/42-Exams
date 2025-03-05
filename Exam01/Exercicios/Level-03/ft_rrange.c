#include <stdlib.h>

int     ft_abs(int nbr)
{
    if (nbr < 0)
        nbr *= -1;
    return (nbr);
}

int     *ft_rrange(int start, int end)
{
    int     *tab;
    int     i = 0;
    int     len;

    len = ft_abs(end - start) + 1;
    tab = (int *)malloc(sizeof(int) * len);

    if (start <= end)
    {
        while (i < len)
        {
            tab[i] = end;
            end--;
            i++;
        }
    }
    else if (start > end)
    {
        while (i < len)
        {
            tab[i] = end;
            end++;
            i++;
        }
    }
    return (tab);
}



#include <stdio.h>

int main()
{
    int *range;
    int start = -2147483648;
    int end = -2147483640;
    int i = 0;

    range = ft_rrange(start, end);
    
    if (range)
    {
        while (i < ft_abs(end - start) + 1)
        {
            printf("%d ", range[i]);
            i++;
        }
        printf("\n");
    }
}