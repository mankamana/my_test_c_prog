#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen (char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        str++;
        count ++;
    }
    return count;
}
void rev (char *str)
{
    char temp;
    int start, end;
    int len = my_strlen (str);
    start = 0;
    end = len-1;
    while (start < end) 
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start ++;
        end --;
    }
    return;
}
void is_palindrome (char *str) 
{
    int start, end;
    int len = my_strlen (str);
    printf ("\nlen = %d\n", len);
    start = 0;
    end = len-1;


    while (start < end) {
        if (str[start] == str[end]) {
            start ++;
            end --;
        } else {
            printf ("\n Not polindrome\n");
            return;
        }

    }
    printf ("\nis polindrom\n");
    return;
}
void main ()
{
    char *temp;
    char *temp1 = "hello";
    temp = malloc (sizeof (char ) * 60);
    strcpy (temp, temp1);
    is_palindrome (temp);
    rev (temp);
    printf ("\n%s %c\n", temp, *temp);
}
