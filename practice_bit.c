#include <stdio.h>
#include <stdlib.h>

void print_bits(unsigned char num)
{
    int bit = 0;
    for(bit=0;bit<(sizeof(unsigned char) * 8); bit++)
    {
        printf("%i ", num & 0x01);
        num = num >> 1;
    }
}
void flip_nibble (char c)
{
    int res = 0;
    res = (((c & 0x0f)<<4) | ((c & 0xf0)>>4));
    print_bits (res);
    printf ("\n");


}
void negate_bits (unsigned char c) {
    printf ("\n Before negation\n");
    print_bits (c);
    printf ("\n After negation\n");
    print_bits (~c);
    return;

}

void main ()
{
    unsigned char a = 0x0a;
    print_bits (a);
    printf ("\n");
    flip_nibble (a);
    printf ("\n");
    negate_bits (a);
}
