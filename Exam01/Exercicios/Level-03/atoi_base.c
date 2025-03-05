#include <stdlib.h>

char    to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return (c);
}

int     get_digit(char c, int base)
{

    if (c >= '0' && c <= '9') 
    {
        if (c - '0' < base)
            return (c - '0');
    }
    if (c >= 'a' && c <= 'f') 
    {
        if (10 + c - 'a' < base)
            return (10 + c - 'a');
    }
    return (-1);
}


int	ft_atoi_base(const char *str, int str_base)
{
    int     i = 0;
    int     sign = 1;
    int     result = 0;
    int     digit;

    if (str == NULL || str_base < 2 || str_base > 16)
        return (0);

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    
    while(str[i])
    {
        digit = get_digit(to_lower(str[i]), str_base);
        if (digit == -1)
            return (0);
        result = result * str_base + digit;
        i++;
    }
    return (result * sign);
}


#include <stdio.h>

int main(void)
{
    printf("Base 10: %d\n", ft_atoi_base("123", 10));
    printf("Base 16: %d\n", ft_atoi_base("a", 16));
    printf("Base 2: %d\n", ft_atoi_base("17", 2));
    printf("Base 8: %d\n", ft_atoi_base("17", 8));
    printf("Base 10 (negativo): %d\n", ft_atoi_base("-42", 16));
    printf("Base 16 (com letras maiúsculas): %d\n", ft_atoi_base("FF", 16));
    printf("Base inválida: %d\n", ft_atoi_base("123", 20));

    return (0);
}