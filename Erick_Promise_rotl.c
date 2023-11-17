#include "monty.h"

void rotl_stack_ep(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr;
    int num_ep;
    (void)line_number;

    ptr = *stack;

    if (!ptr)
    {}
    else
    {
        num_ep = ptr->n;
        while (ptr->next)
        {
            ptr->n = ptr->next->n;
            ptr = ptr->next;
        }
        ptr->n = num_ep;
    }
}
