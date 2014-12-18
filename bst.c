#include <stdlib.h>
#include <stdio.h>

typedef struct tree_t {
    int data;
    struct tree_t *left;
    struct tree_t *right;
} tree;


void insert_node_in_tree (tree **root, int data) 
{
    if (*root == NULL) {
        tree *new_node = malloc (sizeof (tree));
        new_node->left = NULL;
        new_node->right = NULL;
        new_node->data = data;
        *root = new_node;
        return;
    }

    if ((*root)->data <= data) { 
        insert_node_in_tree (&((*root)->right), data);
    } else {
        insert_node_in_tree (&((*root)->left), data);
    }
}

void print_inorder( tree *root) 
{
    if (root == NULL)
        return;
    print_inorder (root->left);
    printf ("\t %d", root->data);
    print_inorder (root->right);
}

int height_of_tree (tree *root) 
{
    int lh = 0, rh = 0;
    if (root == NULL) {
        return 0;
    }
    lh = height_of_tree (root->left);
    rh = height_of_tree (root->right);

    return ((lh >= rh) ? (lh+1) : (rh +1));

}

int common_lowest_parent (tree *root, int num1, int num2) 
{
    if (root == NULL) {
        printf ("\nThere is nothing in tree\n");
    }

    while (root) {
        if ((root->data  <= num1 ) && ((root->data  <= num2 ))) {
            root = root->right;
        } else if ((root->data  > num1 ) && ((root->data  > num2 ))) {
            root = root->left;
        } else {
            return (root->data);
        }
    }
}

void main ()
{
    tree *root = NULL;
    int h;
    int common_parent = 0;
    insert_node_in_tree (&root, 10);
    insert_node_in_tree (&root, 6);
    insert_node_in_tree (&root, 15);
    insert_node_in_tree (&root, 4);
    insert_node_in_tree (&root, 7);
    insert_node_in_tree (&root, 3);
    insert_node_in_tree (&root, 5);
    insert_node_in_tree (&root, 8);
    printf ("\n");
    print_inorder (root);
    printf ("\n");
    h = height_of_tree (root);
    printf ("Height of tree = %d", h);
    printf ("\n");
    common_parent = common_lowest_parent (root, 3, 8);
    printf ("\nCommon parent = %d\n", common_parent);

    printf ("\n");
    printf ("\n");
}
