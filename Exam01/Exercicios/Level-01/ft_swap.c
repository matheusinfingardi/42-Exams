#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int		a;
	int		b;

	a = 29;
	b = 5;
	printf("Antes\n");
	printf("a -> %d\n", a);
	printf("b -> %d\n", b);
	ft_swap(&a, &b);
	printf("Depois\n");
	printf("a -> %d\n", a);
	printf("b -> %d\n", b);
}