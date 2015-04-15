#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num_of_input = 0;
    int i = 0, j = 0, k = 0;
    scanf ("%d", &num_of_input);
    int *l;
    int *b;
    int *result;
    int min = 0, max = 0;
    int temp;
    l = malloc (sizeof(int) * num_of_input);
    b = malloc (sizeof(int) * num_of_input);
    result = malloc (sizeof (int) * num_of_input);
    
    for (i = 0; i < num_of_input; i++) {
        scanf ("%d", &l[i]);
        scanf ("%d", &b[i]);
    }
    for (i = 0; i< num_of_input ; i++) {
        min = (l[i] < (b[i]) ? l[i] : b[i]);
        for (j = 1; j <= min; j++) {
            if ((l[i]%j == 0) && (b[i]%j == 0))
                max = j;
        }
        result [i] = max;
    }
    
    for (i = 0; i< num_of_input; i++) {
        temp = (l[i] * b[i]) / (result [i] * result [i]);
        printf ("%d\n", temp);
    }
    
    return 0;
}

