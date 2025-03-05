int    ft_strcmp(char *s1, char *s2)
{
    int     i = 0;

    while (s1[i] && s2[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}




#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "Hello a";
    char *str2 = "Hello";


    printf("ft_strcmp('%s', '%s'): %d\n", str1, str2, ft_strcmp(str1, str2));
    
    printf("strcmp('%s', '%s'): %d\n", str1, str2, strcmp(str1, str2));

    return 0;
}