#include "monty.h"

/**
 * free_stack -This func frees a dlistint_t list.
 * @top_ep: A pointer to the top of the stack.
 * Return: nothing.
 */

void free_stack_ep(stack_t *top_ep)
{
	stack_t *ptr = top_ep;
	stack_t *temp_ep;

	if (top_ep)
	{
		while (ptr->next)
		{
			temp_ep = ptr;
			ptr = ptr->next;
			free(temp_ep);
		}
		free(ptr);
	}
}
