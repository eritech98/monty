#include "monty.h"

void trim_ep(char *string)
{
	int p = strlen(string) - 1;

	while (p > 0)
	{
		if (isspace(string[p]))
			p--;
		else
			break;
	}

	string[p + 1] = '\0';
}
