#include "monty.h"

void rotr_stack_ep(stack_t **stack, unsigned int line_number)
{
    stack_t *ptr;
    int num_ep;
    (void)line_number;

    ptr = *stack;

    if (!ptr)
    {}
    else
    {
        while (ptr->next)
        {
            ptr = ptr->next;
        }

        num_ep = ptr->n;

        while (ptr->prev)
        {
            ptr->n = ptr->prev->n;
            ptr = ptr->prev;
        }
        ptr->n = num_ep;
    }
}
