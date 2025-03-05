unsigned int    lcm(unsigned int a, unsigned int b)
{
    int nbr;

    if (a == 0 || b == 0)
        return (0);

    if (a > b)
        nbr = a;
    else
        nbr = b;
    
    while(1)
    {
        if (nbr % a == 0 && nbr % b == 0)
            return (nbr);
        nbr++;
    }
}


int main()
{
    unsigned int a, b;

    a = 15;
    b = 20;

    printf("MMC de %u e %u é: %u\n", a, b, lcm(a, b));

    a = 7;
    b = 5;

    printf("MMC de %u e %u é: %u\n", a, b, lcm(a, b));

    a = 0;
    b = 10;

    printf("MMC de %u e %u é: %u\n", a, b, lcm(a, b));

    return 0;
}