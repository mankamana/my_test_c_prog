#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverse_string (char *s) 
{
    if (s == NULL)
        return NULL;
    char *temp_str;
    int len;
    int i, j;
    len = strlen(s) + 1;
    char temp;

    temp_str = (char *)malloc((len) *sizeof (char));
    strcpy (temp_str, s);
    i = 0;
    j = len-2;

    while ((i  <= j)) {
        temp = temp_str[i];
        temp_str[i] = temp_str[j];
        temp_str[j] = temp;
        i++;
        j--;
    }
    return temp_str;


}

void main ()
{
    char *temp = "test";
    temp = reverse_string (temp);
    printf ("\nReversed string is = %s\n", temp);
}
