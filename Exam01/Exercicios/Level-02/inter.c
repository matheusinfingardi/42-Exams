#include <unistd.h>

int main(int argc, char **argv)
{
    int     i = 0;
    int     j = 0;
    unsigned char   seen[256] = {0};

    if (argc == 3)
    {
        i = 0;
        while(argv[1][i])
        {
            j = 0;
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    if (!seen[(unsigned char)argv[1][i]])
                    {
                        write(1, &argv[1][i], 1);
                        seen[(unsigned char)argv[1][i]] = 1;
                    }
                    break ;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}