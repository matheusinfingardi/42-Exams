#include <unistd.h>

int     ft_atoi(char *str)
{
    int     i = 0;
    int     result = 0;
    int     sign = 1;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-')
        sign *= -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}

void    print_hex(int nbr)
{
    char    hex_digits[] = "0123456789abcdef";

    if (nbr >= 16)
        print_hex(nbr / 16);
    write(1, &hex_digits[nbr % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}