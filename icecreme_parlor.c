#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void check (int *a, int m, int n) {
    int i, j;
    for (i = 0; i<n ; i++ ) {
        for (j = i+1; j < n; j++) {
            if ((a[i] + a [j]) == m) {
                printf ("%d %d\n", i+1, j+1);
                return;
            }

        }
    }
}
int main() {
    int t;
    scanf ("%d", &t);
    int flavor [t][10000];
    int m [t];
    int n [t];
    for (int i = 0; i < t; i++) {
        scanf ("%d", &m[i]);
        scanf ("%d", &n[i]);
        for (int j = 0; j < n[i]; j++)
            scanf ("%d", &flavor[i][j]);
    }
     for (int i = 0; i < t; i++) {
                  for (int j = 0; j < n[i]; j++)
                      printf ("\n f [%d] [%d] = %d", i, j, flavor [i] [j]);
     }
     printf ("\n");

    for (int i = 0; i < t; i++) {
        check (flavor [i], m[i], n[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
