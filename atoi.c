/*The atoi() function takes a string (which represents an integer) as 
 * an argument and returns its value.
 *
 * Following is a simple implementation. 
 * We initialize result as 0. We start from the first character 
 * and update result for every character.
 */

#include <stdio.h>
int atoi_implementation (char *string) 
{
    int result = 0;
    while (*string != '\0')
    {
        if ((*string < '0') || (*string > '9'))
        {
            printf ("\n%s(): Wrong string, returning 0 \n ", __FUNCTION__);
            return 0;
        }
        result = result * 10 + (*string - '0');
        string++;
    }

    return result;
}

void main ()
{
    char *temp = "12u34";
    int number = atoi_implementation (temp);
    printf ("\nResult = %d\n", number);
    return;

}
