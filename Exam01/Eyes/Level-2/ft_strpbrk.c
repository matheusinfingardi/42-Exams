#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int     i = 0;
    int     j = 0;

    while (s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
                return ((char *)s1 + i);
            j++;
        }
        i++;
    }
    return (NULL);
}





#include <string.h>
#include <stdio.h>

int main()
{
    const char *s1 = "Hello, World!";
    const char *s2 = "Wor";


    char *result_ft = ft_strpbrk(s1, s2);
    if (result_ft)
        printf("ft_strpbrk encontrou: %c\n", *result_ft);

    char *result_orig = strpbrk(s1, s2);
    if (result_orig)
        printf("strpbrk encontrou: %c\n", *result_orig);

    return 0;
}