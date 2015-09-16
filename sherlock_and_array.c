/*Watson gives Sherlock an array A of length N. Then he asks him to determine if there exists an element in the array such that the sum of the elements on its left is equal to the sum of the elements on its right. If there are no elements to the left/right, then the sum is considered to be zero. 
Formally, find an i, such that, A1+A2...Ai-1 =Ai+1+Ai+2...AN.

Input Format 
The first line contains T, the number of test cases. For each test case, the first line contains N, the number of elements in the array A. The second line for each test case contains N space-separated integers, denoting the array A.

Output Format 
For each test case print YES if there exists an element in the array, such that the sum of the elements on its left is equal to the sum of the elements on its right; otherwise print NO.

Constraints 
1≤T≤10 
1≤N≤105 
1≤Ai ≤2×104 
1≤i≤N
Sample Input

2
3
1 2 3
4
1 2 3 3
Sample Output

NO
YES
*/
#include <stdio.h>

#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num_test;
    scanf ("%d", &num_test);
    int *num_of_ele;
    int **arr;
    int *res;
    int current_sum = 0;
    int total_sum = 0;
    num_of_ele = malloc (sizeof(int) * num_test);
    arr = malloc (sizeof (int*) * num_test);
    res = malloc (sizeof (int) * num_test);
    int i;
    int j;
    for (i = 0; i< num_test; i++) {
        scanf ("%d", &num_of_ele[i]);
        arr[i] = malloc (sizeof(int) * num_of_ele[i]);
        for (j=0; j<num_of_ele[i]; j++) {
            scanf ("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < num_test; i++) {
        if (num_of_ele[i] == 1) {
            res[i] = 1; 
        } else {
            total_sum = 0;
            current_sum = 0;
            for (j = 0; j < num_of_ele[i]; j++) {
                total_sum += arr[i][j];
            }

            while (current_sum < (total_sum/2 + 1)) {
                for (j = 0; j < num_of_ele[i]; j++) {
                    current_sum += arr[i][j];
                    if ((current_sum *2) + arr[i][j+1] == total_sum ) {
                        res[i] = 1;
                        break;
                    }
                }   

            }
        }
    }
    for (i = 0; i< num_test; i++) {
        printf ("\n%d\n", res[i]);
    }



        return 0;
}

