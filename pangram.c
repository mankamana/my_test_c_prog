#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1000];
    int ch[26] = {0};
    int i = 0;
    int temp = 0;
    int len;
    fgets (str, 1000, stdin);
    len = 1000;
    printf ("\n length = %d \n", len);
    for (i = 0; i < 1000; i++){
        if ((str[i] >= 'A') && (str[i] <= 'Z') ){
            temp = str[i] - 'A';
            ch [temp] = 1;
        } else {
            if ((str[i] >= 'a') && (str[i] <= 'z') ){
                temp = str[i] - 'a';
                ch [temp] = 1;
            }
        }
        //printf ("\n temp = %d \t ch[%d] = %d", temp, temp, ch[temp]);
    }
    for (i = 0; i < 26; i++){
            printf ("\n ch [%d] = %d", i, ch [i]);
        if (ch[i] == 0){
            printf ("%s\n","not pangram" );
            return 0;
        }
    }
    printf ("%s\n","pangram" );

    /* enter your code here. read input from stdin. print output to stdout */    
    return 0;
}

