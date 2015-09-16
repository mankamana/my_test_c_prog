#include <stdio.h>
#include <stdlib.h>
int find_missing_number (int *a, int n) 
{
    int x1 ;
    int x2 = a[0];
    int i;
    for (i = 2; i<= n+1; i++)
        x1^=i;
    for (i= 1; i < n; i++)
        x2^=a[i];
    return (x1^x2);
}

void main ()
{
    int a[10] = {1,3,4,5,6,7,8,9};
    int res = find_missing_number (a, 10); 
    printf ("\nRes = %d\n", res);
}
