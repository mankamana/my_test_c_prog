#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () 
{
    int num_of_entry = 0;
    int i = 0;
    int index = -1;
    int j = 0;
    int k = 0;
    scanf ("%d", &num_of_entry);
    char str [num_of_entry][100005];
    int len = 0 ;
    for (i = 0; i < num_of_entry ; i++) {
        scanf ("%s", str[i]);
    }
    for (i = 0; i < num_of_entry ; i++) {
        len = strlen (str[i]);
        k = len-1;
        for (j = 0; j < len; j++) {
            if (str[i][j] == str[i][k]) {
                k --;
            } else if (str[i][++j] == str[i][k] ) {
                index = j;
                printf ("\n%d", index);
                return 0;
            } else if (str[i][j] == str[i][--k]) {
                index = k+1;
                printf ("\n%d", index);
                return 0;
            }
        }

    }
    printf ("\n%d", index);
    return 0;
}
