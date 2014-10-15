/*
 * @copyright Mankamana prasad mishra
 * mankamana_mishra@yahoo.com
 * california
 *
 *
 * Given two strings, find if first string is a subsequence of second
 *
 * Given two strings str1 and str2, find if str1 is a subsequence of 
 * str2. A subsequence is a sequence that can be derived from another 
 * sequence by deleting some elements without changing the order of 
 * the remaining elements (source: wiki). Expected time complexity is 
 * linear.
 *
 * Examples:
 *          Input: str1 = "AXY", str2 = "ADXCPY"
 *          Output: True (str1 is a subsequence of str2)
 *
 *          Input: str1 = "AXY", str2 = "YADXCP"
 *          Output: False (str1 is not a subsequence of str2)
 *
 *          Input: str1 = "gksrek", str2 = "geeksforgeeks"
 *          Output: True (str1 is a subsequence of str2)
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE  1
#define FALSE 0

int check_subsequence (char *str1, char *str2) 
{
    if ((str1 == NULL) || (str2 == NULL))
    {
        printf ("\n%s(): One of the string is NULL, returning", __FUNCTION__);
        return FALSE;
    }

    int len1 = 0;
    int len2 = 0;
    int i    = 0;
    int match = 0;
    int temp = 0;

    len1 = strlen (str1);
    len2 = strlen (str2);
    
    /* If string 1 length is more, then no need to check*/
    if (len1 > len2) {
        return FALSE;
    }
    temp = len2;

    for (i = 0; (i<= temp) && (match != len1); i++) {
        if (*str1 == *str2) {
            match++;
            str1++;
            str2++;
        } else if (len2 > 0) {
            str2++;
            len2--;
        }
    }
    if (len1 == match) {
        return TRUE;
    } else {
        return FALSE;
    }

}

void main ()
{
    char *str1 = NULL;
    char *str2 = NULL;


    if (check_subsequence (str1, str2)) {
        printf ("\n1 - %s(): subsequence TRUE", __FUNCTION__);
    } else {
        printf ("\n1 - %s(): subsequence FALSE", __FUNCTION__);
    }

    str2 = "test";
    if (check_subsequence (str1, str2)) {
        printf ("\n2 - %s(): subsequence TRUE", __FUNCTION__);
    } else {
        printf ("\n2 - %s(): subsequence FALSE", __FUNCTION__);
    }

    str1 = "test";
    str2 = "testtesttest";
    if (check_subsequence (str1, str2)) {
        printf ("\n3 - %s(): subsequence TRUE", __FUNCTION__);
    } else {
        printf ("\n3 - %s(): subsequence FALSE", __FUNCTION__);
    }

    str1 = "AXY";
    str2 = "ADXCPY";
    if (check_subsequence (str1, str2)) {
        printf ("\n4 - %s(): subsequence TRUE", __FUNCTION__);
    } else {
        printf ("\n4 - %s(): subsequence FALSE", __FUNCTION__);
    }
    printf ("\n");

    return;
}
