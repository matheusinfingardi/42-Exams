unsigned char	reverse_bits(unsigned char octet)
{
    int                 i = 8;
    unsigned char       bit;

    while(i--)
    {
        bit = bit * 2 + (octet % 2);
        octet = octet / 2;
    }
    return (bit);
}


#include <stdio.h>

int main()
{
    unsigned char num = 42;

    unsigned char reversed = reverse_bits(num);


    printf("%u\n", reversed);

    return 0;
}