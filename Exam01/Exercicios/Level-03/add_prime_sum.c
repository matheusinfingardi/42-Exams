#include <unistd.h>

int     ft_atoi(char *str)
{
    int     i = 0;
    int     result = 0;
    int     sign = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}

int     is_prime(int nbr)
{
    int     i = 2;

    if (nbr <= 1)
        return (0);
    
    while(i * i <= nbr)
    {
        if (nbr % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void    ft_putnbr(int nbr)
{
    char    digit;

    if(nbr >= 10)
        ft_putnbr(nbr / 10);
    digit = nbr % 10 + '0';
    write(1, &digit, 1);
}


int main(int argc, char **argv)
{
    int     nbr;
    int     sum = 0;

    if (argc == 2)
    {
        nbr = ft_atoi(argv[1]);

        while(nbr > 0)
        {
            if(is_prime(nbr))
                sum += nbr;
            nbr--;
        }
        ft_putnbr(sum);
    }

    if(argc != 2)
        ft_putnbr(0);
    write(1, "\n", 1);
}