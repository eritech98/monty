#include "monty.h"

void push_top_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *top_ep;
	stack_t *list_ep;
	(void)line_number;

	top_ep = *stack;
	list_ep = malloc(sizeof(stack_t));

	if (!list_ep)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	list_ep->n = data;
	list_ep->next = NULL;
	list_ep->prev = NULL;
	if (!top_ep)
		*stack = list_ep;
	else
	{
		list_ep->next = *stack;
		top_ep->prev = list_ep;
		*stack = list_ep;
	}
}
