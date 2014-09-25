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
 * FILE NAME  :binary_tree_oper.c
 * 
 * DESCRIPTION: This file contains all the possible operation in binary 
 * search tree.
 *
 * AUTHOR   : Mankamana Prasad Mishra
 * 
 *******************************************************************************/

#include "binary_search_tree_oper.h"

int get_num_of_element_in_array (int *a)
{
    printf ("%s(): size of array = %lu \n", __FUNCTION__, sizeof(*a));
    return ((sizeof (a))/ (sizeof (int)));
}

void add_member_to_tree (int data, bst_node *root) 
{
    bst_node *temp_node;
    temp_node = (bst_node *)malloc (sizeof (bst_node));
    memset (temp_node, 0, sizeof(bst_node));

    temp_node->data = data;

    if (root == NULL) {
        *root = temp_node;
    } else {

    }

}

/*
 * Main program, which would provide sample input and call the respective API to 
 * make operation 
 */
int main (void)
{
    int size_of_array = 0;
    int i;
    int input_array [] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    bst_node *root; 
    root = (bst_node *)malloc (sizeof (bst_node));
    memset (root, 0, sizeof(bst_node));

    if (root == NULL) {
        printf ("\n Memory allocation failed");
        return 0;
    }



    size_of_array = ((sizeof (input_array))/ (sizeof (int)));
    printf ("%s(): size of array = %d\n", __FUNCTION__, size_of_array);

    for (i = 0 ; i < size_of_array; i++) {
        add_member_to_tree (input_array[i], root);
    }

}
