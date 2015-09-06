#include <stdio.h>
#include <stdlib.h>
void main ()
{
    int a[10] = {1,2,2,4,5,6,7,8,9,10};
    int i =0;
    int result = a[0];
    for (i=1; i<10; i++) {
        result = result | a[i] ;
    }
    printf ("\n Result = %d\n", result);
}
