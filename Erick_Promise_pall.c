#include "monty.h"

void print_all_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *temp_ep;
	(void)line_number;

	temp_ep = *stack;

	if (temp_ep == NULL)
	{};
	while (temp_ep != NULL)
	{
		printf("%d\n", temp_ep->n);
		temp_ep = temp_ep->next;
	}
}
