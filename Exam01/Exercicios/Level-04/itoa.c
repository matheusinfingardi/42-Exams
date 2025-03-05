int     nlen(int nbr)
{
    int     i;

    if (nbr == 0)
        return (1);
    
    i = 0;
    while (nbr != 0)
    {
        nbr /= 10;
        i++;
    }
    return (i);
}

int     ft_abs(int nbr)
{
    if (nbr < 0)
        nbr *= -1;
    return (nbr);
}

char	*ft_itoa(int nbr)
{
    int     len;
    char    *cnum;
    int     i = 0;

    len = nlen(nbr);
    len = len + i;
    
    cnum = (char *)malloc(sizeof(char) * len + 1);
    cnum[0] = '-';
    cnum[len] = '\0';
    
    
    while((len - 1) >= i)
    {
        cnum[len - 1] = ft_abs(nbr % 10) + '0';
        nbr /= 10;
        len--;
    }
    return (cnum);
}