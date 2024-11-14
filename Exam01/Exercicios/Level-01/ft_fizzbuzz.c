#include <unistd.h>

void	ft_writenbr(int i)
{
	char	str[10] = "0123456789";

	if (i > 9)
		ft_writenbr(i / 10);
	write (1, &str[i % 10], 1);
}

int	main()
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_writenbr(i);
		i++;
		write(1, "\n", 1);
	}
}