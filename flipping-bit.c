#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num_of_input = 0;
    int i = 0;
    unsigned int mask = 0xFFFFFFFF;
    scanf ("%d", &num_of_input);
    unsigned int *arr; 
    unsigned int *res;
    arr = malloc (sizeof (unsigned int) * num_of_input);
    res = malloc (sizeof (unsigned int) * num_of_input);
    
    for (i = 0; i < num_of_input; i++) {
        scanf ("%d", &arr[i]);
    }
    
    for (i = 0; i < num_of_input; i++) {
        res [i] = arr[i] ^ mask;
    }
    
    for (i=0; i< num_of_input; i++) {
        printf ("%u\n", res[i]);
    }
    return 0;
}

