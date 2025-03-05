char    *ft_strrev(char *str)
{
    int     i = 0;
    int     len = 0;
    char    tmp;

    while(str[len])
        len++;
    
    while (i < (len / 2))
    {
        tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
        i++;
    }
    return (str);
}


#include <stdio.h>
int main()
{
    char    str[] = "Cruzeiro";

    printf("%s \n", ft_strrev(str));
}