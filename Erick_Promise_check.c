#include "monty.h"

void check_ep(stack_t **top_ep, char **arr_ep, bool error_ep, bool *mode_ep, unsigned int line_ep)
{
	instruction_t pall = {"pall", &print_all_ep};
	instruction_t push = {"push", &push_top_ep};
	instruction_t pint = {"pint", &print_top_ep};
	instruction_t pop = {"pop", &pop_top_ep};
	instruction_t swap = {"swap", &swap_data_ep};
	instruction_t add = {"add", &add_data_ep};
	instruction_t nop = {"nop", &nothing_ep};
	instruction_t sub = {"sub", &sub_data_ep};
	instruction_t div = {"div", &div_data_ep};
	instruction_t mul = {"mul", &mul_data_ep};
	instruction_t mod = {"mod", &mod_data_ep};
	instruction_t pchar = {"pchar", &print_top_char_ep};
	instruction_t pstr = {"pstr", &print_string_ep};
	instruction_t rotl = {"rotl", &rotl_stack_ep};
	instruction_t rotr = {"rotr", &rotr_stack_ep};
	instruction_t stack = {"stack", &stack_mode_ep};
	instruction_t queue = {"queue", &queue_mode_ep};

	if (strlen(arr_ep[0]) ==  strlen(pall.opcode) && strstr(arr_ep[0], pall.opcode))
	{
		pall.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(push.opcode) && strstr(arr_ep[0], push.opcode))
	{
		if (error_ep)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_ep);
			exit(EXIT_FAILURE);
		}

		if (*mode_ep == false)
			end_ep(top_ep);
		else
			push.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(pint.opcode) && strstr(arr_ep[0], pint.opcode))
	{
		pint.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(pop.opcode) && strstr(arr_ep[0], pop.opcode))
	{
		pop.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(swap.opcode) && strstr(arr_ep[0], swap.opcode))
	{
		swap.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(add.opcode) && strstr(arr_ep[0], add.opcode))
	{
		add.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(nop.opcode) && strstr(arr_ep[0], nop.opcode))
	{
		nop.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(sub.opcode) && strstr(arr_ep[0], sub.opcode))
	{
		sub.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(div.opcode) && strstr(arr_ep[0], div.opcode))
	{
		div.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(mul.opcode) && strstr(arr_ep[0], mul.opcode))
	{
		mul.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(mod.opcode) && strstr(arr_ep[0], mod.opcode))
	{
		mod.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(pchar.opcode) && strstr(arr_ep[0], pchar.opcode))
	{
		pchar.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(pstr.opcode) && strstr(arr_ep[0], pstr.opcode))
	{
		pstr.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(rotl.opcode) && strstr(arr_ep[0], rotl.opcode))
	{
		rotl.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(rotr.opcode) && strstr(arr_ep[0], rotr.opcode))
	{
		rotr.f(top_ep, line_ep);
	}
	else if (strlen(arr_ep[0]) == strlen(stack.opcode) && strstr(arr_ep[0], stack.opcode))
	{
		*mode_ep = true;
	}
	else if (strlen(arr_ep[0]) == strlen(queue.opcode) && strstr(arr_ep[0], queue.opcode))
	{
		*mode_ep = false;
	}
	else if ((strlen(arr_ep[0]) == 1 && isspace(arr_ep[0][0])) || strlen(arr_ep[0]) == 0)
    {}
	else if (!check_string_ep(arr_ep[0]))
	{}
    else
    {
        fprintf(stderr, "L%d: unknown instruction %s\n", line_ep, arr_ep[0]);
        exit(EXIT_FAILURE);
    }
}
