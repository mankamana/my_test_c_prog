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
 * FILE NAME  :binary_tree_oper.h
 * 
 * DESCRIPTION: This file contains all the declaration needed for binary tree
 *
 * AUTHOR   : Mankamana Prasad Mishra
 * 
 *******************************************************************************/

#include <stdio.h>
#include <conio.h>

typedef struct bst_type {
    int data;            // Data to be stored in node
    struct bst_type *left;      // pointer to left node
    struct bst_type *right;     // pointer to right node
    struct bst_type *parent;    // pointer to parent node 
}bst_node;
