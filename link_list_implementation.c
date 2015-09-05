#include <stdio.h>
#include <stdlib.h>

typedef struct link_list_t {
    int data;
    struct link_list_t *next; 
} node;

void insert_list (node **head, int data) 
{
    node *temp = *head;
    node *temp_node = NULL;
    if (*head == NULL) {
        temp_node = malloc (sizeof(node));
        temp_node->next = NULL;
        temp_node->data = data;
        *head = temp_node;
        return;
    }
    temp_node = malloc (sizeof(node));
    temp_node->next = NULL;
    temp_node->data = data;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = temp_node;
    return;
}

node * insert_in_list (node *head, int data) 
{
    if (head == NULL) {
        head = malloc (sizeof (node));
        head->next = NULL;
        head->data = data;
        return head;
    }
    node *temp = head;
    node *temp_node ;
    while (head->next != NULL)
        head = head->next;
    temp_node = malloc (sizeof(node));
    temp_node->next = NULL;
    temp_node->data = data;
    head->next = temp_node;
    return (temp);
}

void print_list (node *head) 
{
    if (head == NULL) {
        return;
    }
    while (head != NULL) {
        printf ("\n %d", head->data);
        head = head->next;
    }
    printf ("\n");
    return;
}

node * reverse_list (node *head) 
{
    if (head == NULL)
        return head;
    node *prev = NULL;
    node *curr = NULL;
    node *next = NULL;
    curr = head;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;

}
void rev_lsit (node **head) 
{
    if (*head == NULL)
        return;

    node *prev = NULL;
    node *curr = *head;
    node *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head = prev;
        
}
void main ()
{
    node *head = NULL;
    insert_list (&head, 19);
    head = insert_in_list (head, 5);
    head = insert_in_list (head, 8);
    head = insert_in_list (head, 3);
    print_list (head);
    insert_list (&head, 19);
    print_list (head);
    head = reverse_list (head);
    print_list (head);
    rev_lsit (&head);
    print_list (head);
}

