int		max(int* tab, unsigned int len)
{
    int     i = 0;
    int     result;

    if (len == 0)
        return (0);
    result = tab[i];
    while(i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return (result);
}



#include <stdio.h>

int max(int* tab, unsigned int len);

int main()
{
    int array[] = {1, 42, 17, 99, 5}; 

    printf("%d\n", max(array, 5));


    return 0;
}
