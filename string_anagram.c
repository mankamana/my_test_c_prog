#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int is_anagram (char *str1, char *str2 )
{
    unsigned char res = *str1;
    str1++;
    while (*str1) {
        res = (res ^ *str1);
        str1++;
    }
    res = res ^ *str2;
    str2++;
    while (*str2) {
        res = (res ^ *str2);
        str2++;
    }
    printf ("\nRes = %d\n", res);
    return (!res);

}
void main ()
{
    char *str1 = "Testffff";
    char *str2 = "tseT";
    if (is_anagram(str1, str2)) 
        printf ("\nAnagram\n");
    else 
        printf ("\nNo\n");
    char test1 = 'c';
    char test2 = 'd';
    printf ("\n%d\n", (test1^test2));
}
