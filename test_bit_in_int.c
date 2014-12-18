#include <stdio.h>
#include <stdlib.h>

int is_bit_set (int bit_map, int bit)
{
    return ((bit_map >> (bit-1)) & 1);
}

void main ()
{
    int a = 2;
    int b = 2;
    if (is_bit_set (a, b)) {
    printf ("\n: bit is set = ");
    } else {
    printf ("\n: bit is not set = ");
    }
}

