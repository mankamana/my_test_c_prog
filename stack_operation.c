#include <stdlib.h>
#include <stdio.h>

#define MAX_VAL 5

void push_element_to_stack (int *stack, int element, int *top) 
{
    if (*top >= (MAX_VAL -1)) {
        printf ("\n Stack overflow \n");
        return;
    }

    (*top) ++;
    stack [*top] = element;
    printf ("\n Element pushed %d\n", stack [*top]);
    return;
}

void pop_element_from_stack (int *stack, int *top) 
{
    int temp;
    if (*top <= 0) {
        printf ("\n Stack underflow\n");
        return;
    }

    temp = stack[*top];
    (*top)--;
    printf ("\n Popped element = %d", temp);
    return;
}

void display_stack (int *stack, int top)
{
    int i;
    printf ("\n Stack display\n");
    for (i=0; i<=top; i++)
        printf ("\t %d", stack[i]);
    printf ("\n Stack display ends\n");
}

void main ()
{
    int stack[MAX_VAL];
    int top = -1;
    pop_element_from_stack (stack, &top);
    push_element_to_stack (stack, 1, &top);
    push_element_to_stack (stack, 2, &top);
    push_element_to_stack (stack, 3, &top);
    display_stack (stack, top);
    pop_element_from_stack (stack, &top);
    display_stack (stack, top);
    push_element_to_stack (stack, 4, &top);
    push_element_to_stack (stack, 5, &top);
    push_element_to_stack (stack, 6, &top);
    push_element_to_stack (stack, 6, &top);
    display_stack (stack, top);
}



