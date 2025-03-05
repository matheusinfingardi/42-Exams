int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    return (n & (n - 1)) == 0;
}


#include <stdio.h>

int main()
{
    unsigned int n = 17;

    printf("%u \n", is_power_of_2(n));

    return 0;
}