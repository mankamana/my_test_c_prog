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
int search_node (tree *root, int data) 
{
    if (root == NULL) {
        return 0;
    }
    while (root != NULL) {
        if (root->ele == data) {
            return 1;
        }
        if (root->ele > data) {
            root = root->left; 
        } else {
            root = root->right;
        }

    }
    return 0;

}
tree * insert_node_ (tree *root, int data) 
{
    tree *temp_node = NULL; 
    tree *temp_parent = root;
    tree *temp_root = root;
    if (root == NULL) {
        temp_node = malloc (sizeof(tree));
        temp_node->left = NULL;
        temp_node->right = NULL;
        temp_node->ele = data;
        return temp_node;
    }
    while (root != NULL) {
        temp_parent = root;
        if (root->ele > data) {
            root = root->left; 
        } else {
            root = root->right;
        }
    }
    temp_node = malloc (sizeof(tree));
    temp_node->left = NULL;
    temp_node->right = NULL;
    temp_node->ele = data;
    if (temp_parent->ele > data) {
        temp_parent->left = temp_node; 
    } else {
        temp_parent->right = temp_node; 
    }

    return temp_root;
}

void main ()
{
    tree *root = NULL;
    int height = 0;
    int search = 0;

    root = insert_an_ele (root, 6);
    root = insert_an_ele (root, 7);
    root = insert_an_ele (root, 63);
    root = insert_an_ele (root, 68);
    root = insert_an_ele (root, 1);
    inorder (root);
    height = height_of_tree (root);
    printf ("\n\n Height = %d", height);
    search = search_node (root, 100);
    printf ("\n%s\n", search ? "Found": "not found");
    root = insert_node_ (root, 3);
    inorder (root);
    height = height_of_tree (root);
    search = search_node (root, 3);
    printf ("\n%s\n", search ? "Found": "not found");
    root = insert_node_ (root, 4);
    root = insert_node_ (root, 5);
    height = height_of_tree (root);
    printf ("\n\n Height = %d", height);
    printf ("\n");


}
