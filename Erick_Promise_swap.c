#include "monty.h"

size_t len_ep(stack_t *stack)
{
	stack_t *ptr = stack;
	size_t count_ep = 0;

	if (!ptr)
		return (0);
	while (ptr)
	{
		ptr = ptr->next;
		count_ep++;
	}
	return (count_ep);
}

void swap_data_ep(stack_t **stack, unsigned int line_number)
{
	int num_ep, num2_ep;
	stack_t *ptr = *stack;

	if (len_ep(ptr) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	num_ep = ptr->n;
	num2_ep = ptr->next->n;
	ptr->n = num2_ep;
	ptr->next->n = num_ep;
}
