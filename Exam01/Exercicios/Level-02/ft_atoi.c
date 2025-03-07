int	ft_atoi(const char *str)
{
    int     i = 0;
    int     result = 0;
    int     sign = 1;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}


#include <stdio.h>

int main()
{
    char    *str;

    str = "-2147483648";
    printf("%i\n", ft_atoi(str));

}