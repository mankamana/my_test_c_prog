 /******************************************************************************
 * LEGALESE:   Copyright (c) 2014, Mankamana Prasad Mishra
 * 
 * This source code is confidential, proprietary, and contains trade$
 * secrets that are the sole property of Mankamana Prasad Mishra
 * Copy and/or distribution of this source code or disassembly or reverse$
 * engineering of the resultant object code are strictly forbidden without$
 * the written consent of Mankamana Prasad Mishra
 * 
 * *****************************************************************************
 * 
 * FILE NAME  :array_basic_operation.c
 * 
 * AUTHOR   : Mankamana Prasad Mishra
 * 
 *******************************************************************************/

#include <stdio.h>

int get_num_of_element_in_array (int *a) 
{
    printf ("%s(): size of array = %d", sizeof (a));
    return ((sizeof (a))/ (sizeof (int)));
}
