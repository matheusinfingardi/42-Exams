#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t      i = 0;
    int         j;

    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
                break ;
            j++;
        }
        if (!accept[j])
            break ;
        i++;
    }
    return (i);
}



#include <string.h>

int main()
{
    const char *s = "ab c123";
    const char *accept = "ab1c";
    
    size_t result_ft = ft_strspn(s, accept);
    printf("ft_strspn: Número de caracteres consecutivos em 's' que estão em 'accept': %zu\n", result_ft);

    size_t result_orig = strspn(s, accept);
    printf("strspn: Número de caracteres consecutivos em 's' que estão em 'accept': %zu\n", result_orig);
    
    return 0;
}