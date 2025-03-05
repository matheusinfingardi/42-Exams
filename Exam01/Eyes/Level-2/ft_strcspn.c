#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int     i = 0;
    int     j = 0;

    while(s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}



#include <stdio.h>
#include <string.h>

int main()
{
    const char *s = "Hello, World!";
    const char *reject = " ,!";

    printf("ft_strcspn('%s', '%s'): %zu\n", s, reject, ft_strcspn(s, reject));

    printf("strcspn('%s', '%s'): %zu\n", s, reject, strcspn(s, reject));

    return 0;
}