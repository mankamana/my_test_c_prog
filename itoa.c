/*itoa function converts integer into null-terminated string. 
 * It can convert negative numbers too. The standard definition 
 * of itoa function is give below:-
 *
 * char* itoa(int num, char* buffer, int base) 
 * The third parameter base specify the conversion base. 
 * For example:- if base is 2, then it will convert the integer into 
 * its binary compatible string or if base is 16, then it will create 
 * hexadecimal converted string form of integer number.
 *
 * If base is 10 and value is negative, the resulting string is preceded
 * with a minus sign (-). With any other base, value is always considered unsigned.
 */

#include <stdlib.h>
#include <stdio.h>
int count_num_of_digit (int number) 
{
    int count;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

void itoa_implementation (int number, char *str)
{
    int count = count_num_of_digit (number);
    str = (char *)malloc (sizeof (char) * (count + 1));
    str = str + count + 1;
    *str = '\0'; 

    while (number != 0 ) 
    {
        str --;
        number = number% 10;
        *str =(char)(number + '0');
        number /= 10;
    }
    printf ("\n in string = %s", str);
    return;
}

void main ()
{
    int a = 1234;
    char * temp = NULL;

    itoa_implementation (a, temp);
    printf ("\n in string = %s\n", temp);
    return;
}
