#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num_of_test_case; 
    scanf ("%d", &num_of_test_case);
    int a [num_of_test_case];
    int res [num_of_test_case];
    int min = 0;
    int next_min = 0;
    int i;
    int count = 0;
    int j = 0;
    int k = 0;

    for (i = 0; i < num_of_test_case; i++)
    {
        scanf ("%d", &a[i]);
        res [i] = 0;
    }
    min = a[0];
    for (i = 0; i < num_of_test_case; i++) {
        if (min > a[i])
            min = a[i];
    }
    for (k = 0; k<num_of_test_case; k++) {
        for (i = 0; i< num_of_test_case; i++) {
            if (a[i] > 0) {
                res[j] = res[j] +1;
                a [i] = a[i] - min;
            } else {
                a [i] = 0;
            }

            if (!next_min && (a[i] > 0))
                next_min = a[i];
            printf ("\t a[%d] = %d", i, a[i]);
        }
            printf ("\t res[%d] = %d", k, res[k]);
    printf ("\n");
        min = next_min;
        next_min = 0;
        for (i = 0; i < num_of_test_case; i++) {
            if ((min > a[i]) && (a[i] > 0))
                min = a[i];
        }
        j++;
    }
    printf ("\n");
    for (i =0 ; i < num_of_test_case ; i ++){
        if (!res[i])
            return 0;
        printf ("%d\n", res[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
