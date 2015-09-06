#include <stdio.h>
#include <stdlib.h>


typedef struct tree_type {
    int ele;
    struct tree_type *left;
    struct tree_type *right;
} tree ;

tree * insert_an_ele (tree *root, int data) 
{
    tree *temp_node = NULL;
    if (root == NULL) {
        temp_node = malloc (sizeof(tree));
        temp_node->left = NULL;
        temp_node->right = NULL;
        temp_node->ele = data;
        return temp_node;
    }
    if (root->ele <= data) {
        root->right = insert_an_ele (root->right, data);
    } else {
        root->left  = insert_an_ele (root->left, data);
    }
    return root;
}
int height_of_tree (tree *root) {
    if (root == NULL)
        return 0;
    int lh = height_of_tree (root->left);
    int rh = height_of_tree (root->right);
    return ((lh >= rh) ? (lh+1): (rh+1));
}

void inorder (tree *root) {
    if (root == NULL)
        return;
    inorder(root->left);
    printf ("\t%d \t", root->ele);
    inorder(root->right);
}

void main ()
{
    tree *root = NULL;
    int height = 0;

    root = insert_an_ele (root, 6);
    root = insert_an_ele (root, 7);
    root = insert_an_ele (root, 63);
    root = insert_an_ele (root, 68);
    root = insert_an_ele (root, 1);
    inorder (root);
    height = height_of_tree (root);
    printf ("\n\n Height = %d", height);


}
