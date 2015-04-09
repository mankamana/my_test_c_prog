#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
void findPalind(char *arr)
{
     
    int flag = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        flag = flag ^ arr [i];
        i++;
    }
    printf ("\nflag = %d", flag);
    if (((flag < 'z') && (flag > 'a')) || ((flag < 'Z') && (flag > 'A')))
        flag = 0;

    // Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    
    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}

