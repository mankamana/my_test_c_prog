#include <stdlib.h>
#include <stdio.h>


void main ()
{
    int *a;
    int *b;
    int c = 5, d =10;
    a = &c;
    b = a;

    if (a == b)
        printf ("\nTRUE\n");


    printf ("\n%s(): a = %p\n", __FUNCTION__,a);
    printf ("\n%s(): b = %p\n", __FUNCTION__,  b);
    return;
}
