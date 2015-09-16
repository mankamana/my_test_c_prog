#include <stdio.h>
#include <stdlib.h>
void main ()
{
    int *a = NULL;
    a = malloc (sizeof(int));
    *a = 5;
    (*a)++;
    printf ("\n%d %p\n", *a, a);
    *a++;
    printf ("\n%d %p\n", *a, a);
    *a += 1;
    printf ("\n%d %p\n", *a, a);
    a ++;
    printf ("\n%d %p\n", *a, a);
    a ++;
    printf ("\n%d %p\n", *a, a);
    *a++;
    printf ("\n%d %p\n", *a, a);

}
