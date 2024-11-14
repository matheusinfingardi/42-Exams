#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		rot_one(char c)
{
	if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
		c += 1;
	else if ((c == 'z') || (c == 'Z'))
		c -= 25;
	return (c);
	
}

int main(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		while(*argv[1])
			ft_putchar(rot_one(*argv[1]++));
		ft_putchar('\n');
	}
}