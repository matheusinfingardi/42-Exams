#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main()
{
	char	*dest;
	char	*src;

	src = "Cruzeiro";
	dest = malloc((strlen(src) + 1) * sizeof(char));

    if (dest == NULL)
    {
        fprintf(stderr, "Erro ao alocar memória\n");
        return (1);
    }

    printf("%s\n", ft_strcpy(dest, src));

    free(dest);
    return (0);
}