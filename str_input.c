#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int check_strike (char *str)
{
    int len = strlen (str);
    int i = 0;
    int j = len-1;
    int temp = 0;
    int result = 0;

    while (i <= j) {
        while (str[i] != str[j]){
            if (str[i] < str[j]) {
                temp = (int)str[j];
                temp --;
                str[j] = temp;
                result++;
            } else {
                temp = (int)str[i];
                temp --;
                str[i] = temp;
                result ++;
            }
        }
        i++;
        j--;
    }
    return result;
}

int main() {

    int num_of_test_case = 0;
    int i = 0;
    int strike = 0;
    scanf ("%d", &num_of_test_case);
    char string [num_of_test_case] [10000];
    for (i = 0; i < num_of_test_case; i++) {
        scanf ("%s", string[i]);
    }
    for (i = 0; i < num_of_test_case; i++){
        strike = check_strike (string[i]);
        printf ("%d\n", strike);
    }
    return 0;
}

