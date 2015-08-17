#include <stdio.h>
#include <stdlib.h>
void main (){
    int *a = NULL;
    a = malloc (sizeof(int) * 5);
    int i = 0;
    int b , c;

    if (!(b = c)) {

        printf ("\n INSIDEn");
    }

        printf ("\n %p\n", a);
    for (i = 0; i< 5; i++) {
        printf ("\n %p %d\n", ++a, *a++);
    }



}
