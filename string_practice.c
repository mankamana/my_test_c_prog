#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_reverse (char *str, int len) 
{
    if (str == NULL) 
        return;
    int start = 0;
    int end = (strlen (str) - 1);
    while (start < end) {
        *(str+start) ^= *(str+end);
        *(str+end) ^= *(str+start);
        *(str+start) ^= *(str+end);
        start++;
        end --;
    }
    return;
} 

void main ()
{
    char str[6] = "Hello";
    int len = 0; 
    len = strlen (str);
    printf ("\n Initial string : %s\n", str);
    string_reverse (str, len);
    printf ("\n Rev string : %s\n", str);

}
