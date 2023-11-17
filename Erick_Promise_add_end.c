#include "monty.h"

void end_ep(stack_t **stack)
{
    stack_t *new_ep, *ptr;

    ptr = *stack;
    new_ep = malloc(sizeof(stack_t));

    if (!new_ep)
    {
        fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
    }

    new_ep->n = data;
    new_ep->next = NULL;
    new_ep->prev = NULL;

    if (!ptr)
        *stack = new_ep;
    else
    {
        while (ptr->next)
        {
            ptr = ptr->next;
        }
        new_ep->prev = ptr;
        ptr->next = new_ep;
    }
}
