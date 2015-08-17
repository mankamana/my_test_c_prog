#include <stdio.h>
#include <stdlib.h>

void int_to_string (int num) 
{
    int len = 0;
    int temp = num;
    char *str = NULL;
    char temp1 ;

    while (temp != 0 ) {
        len ++;
        temp /= 10;
    }
    printf ("\n Total length = %d", len);
    str = malloc (sizeof (char) * len + 1);
    str [len] = '\0';
    while (num) {
        
        temp1 = num%10 + '0';
        printf ("\n %c", temp1);
        str[--len]= temp1;
        num/=10;
    }

    printf ("\n\n Number is =%s \n", str);
    return;
}

void main ()
{
    int a = 154544;
    int_to_string (a);
    return;
}
