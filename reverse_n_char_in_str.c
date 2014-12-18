#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverse_string (char *s, int n) 
{
    if (s == NULL)
        return NULL;
    char *temp_str;
    int len;
    int i, j;
    len = strlen(s) ;
    char temp;

    temp_str = (char *)malloc((len +1) *sizeof (char));
    strcpy (temp_str, s);
    i = 0;
    j = n-1;

    while ((j <= len)) {
        temp = temp_str[i];
        temp_str[i] = temp_str[j];
        temp_str[j] = temp;
        i+=n;
        j+=n;
    }
    temp_str [len+1] = '\0';
    return temp_str;


}

void main ()
{
    char *temp = "interview";
    temp = reverse_string (temp, 3);
    printf ("\nReversed string is = %s\n", temp);
}
