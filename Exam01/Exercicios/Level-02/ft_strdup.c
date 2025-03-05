#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int     i = 0;
    int     len = 0;
    char    *dup;

    while(src[len])
        len++;
    dup = malloc(sizeof(char) * len + 1);
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}



#include <stdio.h>

int main()
{
    char *str = "Hello, World!";
    char *copy;


    copy = ft_strdup(str);

    printf("Original: %s\n", str);
    printf("Cópia: %s\n", copy);

    free(copy);

    return 0;
}