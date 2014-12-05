#include <stdio.h>
#include <stdlib.h>

void print_bits (char *a) 
{
    int i;
    printf ("\n");
    for (i = 0; i < 8; i++) {
        if ((*a ) & 1) 
        {
            printf ("\t 1"); 
        } else { 
            printf ("\t 0"); }
        a++;

    }
    printf ("\n");
    return ;

}
void main ()
{
    char a = 'a';

    print_bits (&a);
    printf ("\n Initial char = %c", a);

    a = (a<<4) || (a >> 4);
    print_bits (&a);
    printf ("\n After char = %c \n", a);
    a = (a<<4) || (a >> 4);
    print_bits (&a);
    printf ("\n After char = %c \n", a);

    return;
}
