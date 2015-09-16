#include <stdio.h>
#include <stdlib.h>
void main ()
{
    const char *p1;
    const char const *p2;
    char* const p3 = "hello p3";
    int i = 0;
    p1 = "Hello";
    p2 = "hello p2";
    p1 = "Hi";
    printf ("\n %s \t %s \t %s\n", p1, p2, p3);


}
