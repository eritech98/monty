#include "monty.h"

void add_data_ep(stack_t **stack, unsigned int line_number)
{
	int res_ep;
	stack_t *ptr = *stack;

	if (len_ep(*stack) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	res_ep = ptr->n + ptr->next->n;
	ptr->next->n = res_ep;
	pop_top_ep(stack, line_number);
}

void nothing_ep(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}
