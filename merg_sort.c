#include <stdio.h>
#include <stdlib.h>

void merg (int *a, int low, int mid, int upper)
{
    int i = low;
    int j = mid;
    int k = 0;
    int *b;
    b = malloc (sizeof (int) * (upper - low));

    while ((i < mid) &&  (j < upper)) {
        if (a[i] <= a[j]) {
            b[k] = a[i];
            i++;
        } else {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    while (i < mid) {
        b[k] = a[i];
        i++; k++;
    }
    while (j < upper) {
        b[k] = a[j];
        j++; k++;
    }
    for (k = 0; k < (upper - low ); k++) 
        a[low+k] = b[k];
    return;
}
void merg_sort (int *a, int low, int upper) 
{
    if (a == NULL) {
        return;
    }
    if (low > upper) {
        return;
    }
    if ((upper - low) <= 1) {
        return;
    } else {
        int mid ;
        mid = low + ((upper - low) / 2 );
        merg_sort (a, low, mid);
        merg_sort (a, mid, upper);
        merg (a, low, mid, upper);
    }
    return;
}
void main ()
{
    int a []= {6,3,4,5,6};
    int size = (sizeof (a)/ sizeof (int));
    int i = 0;
    printf ("\n Size of array = %d\n", size);
    merg_sort (a, 0, size);
    for (i =0; i< size; i++) {
        printf ("\n %d", a[i]);
    }
    printf ("\n");

}
