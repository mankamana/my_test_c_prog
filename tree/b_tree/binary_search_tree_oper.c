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

bst_node* add_member_to_tree (int data, bst_node *root) 
{

    if (root == NULL) {
        bst_node *temp_node;
        temp_node = (bst_node *)malloc (sizeof (bst_node));

        temp_node->data = data;
        temp_node->left = NULL;
        temp_node->right = NULL;
        root = temp_node;
        return root;
    } else {
        if ((root)->data >= data) {

            (root)->left  =  (add_member_to_tree (data , (root)->left));
        } else  {
            (root)->right =  (add_member_to_tree (data , (root)->right));
        }
    }
    return root;
}

void display_tree_nodes (bst_node *root) 
{
    if (root == NULL) 
    {
        return;
    }
    display_tree_nodes (root->left);
    printf ("\nData = %d", root->data);
    display_tree_nodes (root->right);
}

int count_node (bst_node *root)
{
    if (root == NULL)
        return 0;
    return (count_node(root->left) + 1 + count_node(root->right));

}

int max_depth_tree (bst_node *root)
{
    if (root == NULL) {
        return -1;
    } else {
        int left_height = max_depth_tree (root->left);
        int right_height = max_depth_tree (root->right);
        if (left_height > right_height)
            return (left_height+1);
        else 
            return (right_height+1);
    }
}

int min_value_tree (bst_node *root) 
{
    if (root == NULL) 
        return 0;
    while (root->left != NULL) 
        root = root->left;
    return (root->data);
}

int max_value_tree (bst_node *root)
{
    if (root == NULL)
        return 0;
    while (root->right != NULL) 
        root = root->right;
    return (root->data);
}

int has_some_path (bst_node *root, int sum)
{
    int sub_sum;
    if (root == NULL)
        return ( (sum == 0));
    
    sub_sum = sum - root->data ; 
        return (has_some_path (root->left, sub_sum) 
                || has_some_path (root->right, sub_sum));

}

void print_all_possible_paths ()
{

}

/*
 * Main program, which would provide sample input and call the respective API to 
 * make operation 
 */
int main (void)
{
    int size_of_array = 0;
    int i;
    int input_array [] = {100,45,76,23,123,654,5674,235,45,3,46,4};
    bst_node *root = NULL; 

    size_of_array = ((sizeof (input_array))/ (sizeof (int)));
    printf ("%s(): size of array = %d\n", __FUNCTION__, size_of_array);

    for (i = 0 ; i < size_of_array; i++) {
        root = add_member_to_tree (input_array[i], root);
    }
    display_tree_nodes (root);
    printf ("\n");
    printf ("\n count = %d\n", count_node(root));

    printf ("\n");
    printf ("\n height = %d\n", max_depth_tree(root));

    printf ("\n");
    printf ("\n min_value = %d\n", min_value_tree(root));

    printf ("\n");
    printf ("\n max_value = %d\n", max_value_tree(root));

    printf ("\n");
    printf ("\n has sum = %d\n", has_some_path(root, 1112));
}
