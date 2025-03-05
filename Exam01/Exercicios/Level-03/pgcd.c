#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int     nbr1;
    int     nbr2;

    if (argc == 3)
    {
        nbr1 = atoi(argv[1]);
        nbr2 = atoi(argv[2]);

        if (nbr1 > 0 && nbr2 > 0)
        {
            while (nbr1 != nbr2)
            {
                if (nbr1 > nbr2)
                    nbr1 -= nbr2;
                else if (nbr1 < nbr2)
                    nbr2 -= nbr1;
            }
            printf("%d", nbr1);
        }
    }
    printf("\n");
}