#include "monty.h"

char **read1_ep(char *buffer_ep)
{
	char **arr_ep = malloc(2 * sizeof(char *));
	char e[] = " ";
	int limit = 0;
	int p;
	char *portion_ep;

	for (p = 0; p < 2; p++)
		arr_ep[p] = malloc(100 * sizeof(char));

	trim_ep(buffer_ep);
	portion_ep = strtok(buffer_ep, e);

	while (portion_ep != NULL && limit < 2)
	{
		strcpy(arr_ep[limit], portion_ep);
		limit++;
		portion_ep = strtok(NULL, e);
	}
	return (arr_ep);
}
