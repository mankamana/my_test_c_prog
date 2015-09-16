#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int func (int num, ...) {
    va_list valist;
    int sum = 0;
    int i = 0;
    va_start (valist, num);
    for (i = 0; i < num; i++) {
        sum+= va_arg (valist , int);
    }
    va_end(valist);
    return sum;
}

void main ()
{
    int sum = 0;
    sum = func (5,2,3,4,5);
    printf ("\n Sum = %d\n", sum);
}
