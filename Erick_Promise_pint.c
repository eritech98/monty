#include "monty.h"

void print_top_ep(stack_t **stack, unsigned int line_number)
{
	stack_t *top_ep = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
		printf("%d\n", top_ep->n);
}
