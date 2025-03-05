#include <unistd.h>

void    write_word(char *start, char *end)
{
    while (start < end)
    {
        write(1, start, 1);
        start++;
    }
}


int main(int argc, char **argv)
{
    char    *str;
    char    *start;
    char    *end;
    int     i = 0;

    if (argc > 1)
    {
        str = argv[1];
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        start = &str[i];
        while(str[i] && str[i] != ' ' && str[i] != '\t')
            i++;
        end = &str[i];
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i])
        {
            while(str[i])
            {
                if (str[i] == ' ' || str[i] == '\t')
                {
                    while(str[i] == ' ' || str[i] == '\t')
                        i++;
                    if (str[i])
                        write(1, " ", 1);
                }
                else
                {
                    write(1, &str[i], 1);
                    i++;
                }
            }
            write(1, " ", 1);
        }
        write_word(start, end);
    }
    write(1, "\n", 1);
}