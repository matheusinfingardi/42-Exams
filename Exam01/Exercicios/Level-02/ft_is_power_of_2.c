#include <stdio.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n & (n - 1)) == 0;
}


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    unsigned int num = (unsigned int)atoi(argv[1]);

    if (is_power_of_2(num)) {
        printf("%u é uma potência de 2.\n", num);
    } else {
        printf("%u não é uma potência de 2.\n", num);
    }

    return 0;
}