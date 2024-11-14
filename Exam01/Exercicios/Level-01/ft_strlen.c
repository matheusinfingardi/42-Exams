#include <stdio.h>
int	ft_strlen(char *str)
{
	int		count;
	
	count = 0;
	while(str[count])
		count++;
	return (count);
}

int main()
{
	printf("%d\n", ft_strlen("Cruzeiro"));
}