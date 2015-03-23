#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int is_allowed (int *arr, int time, int n) {
    int i = 0;
    int sum = 0;
    for (i = 0; i< n; i++) {
        if (arr[i] <= 0)
            sum++;
    }
    if (sum >= time){
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int t;
    int i = 0;
    scanf ("%d", &t);
    int n;
    int time ;
    int student [t][1000] ;
    int k[t] ;
    int j;
    for (i = 0; i < t ;i++){
        scanf ("%d", &n);
        scanf ("%d", &k[i]);
        for (j = 0; j< n; j++)
            scanf ("%d", &student [i][j]);
    }
    for (i = 0; i < t ;i++){
        if (is_allowed (student [i], k[i], n)){
            printf ("%s\n", "YES");
        } else {
            printf ("%s\n", "NO");
        }
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
