#include <unistd.h>

int     ft_atoi(char *str)
{
    int     i = 0;
    int     result = 0;
    int     sign = 1;

    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}

void    ft_putnbr(int nbr)
{
    char    digit;

    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    digit = nbr % 10 + '0';
    write(1, &digit, 1);
}


int     main(int argc, char **argv)
{
    int     i = 1;
    int     nbr;

    if(argc == 2)
    {
        nbr = ft_atoi(argv[1]);

        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " * ", 3);
            ft_putnbr(nbr);
            write(1, " = ", 3);
            ft_putnbr(i * nbr);
            write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
}