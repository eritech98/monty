#include "monty.h"
int data = 0;

int main(int argc, char **argv)
{
    FILE *file;
    stack_t *top_ep;
    char buffer_ep[1024];
    char **arr_ep;
    int line_ep;
    bool error_ep;
    bool mode_ep;
    size_t p;
    int y;

    mode_ep = true;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");

    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    top_ep = NULL;
    line_ep = 0;
    
    while (1)
    {
        fgets(buffer_ep, 1024, file);
        line_ep++;
        if (feof(file) || ferror(file)) break;
        error_ep = false;
        arr_ep = read1_ep(buffer_ep);
        if (arr_ep[1][0] == '-' || arr_ep[1][0] == '+')
        {
            for (p = 1; p < strlen(arr_ep[1]); p++)
            {
                if (!isdigit(arr_ep[1][p]))
                {
                    error_ep = true;
                    break;
                }
            }
        }
        else
        {
            for (p = 0; p < strlen(arr_ep[1]); p++)
            {
                if (!isdigit(arr_ep[1][p]))
                {
                    error_ep = true;
                    break;
                }
            }
        }

        data = atoi(arr_ep[1]);
        check_ep(&top_ep, arr_ep, error_ep, &mode_ep, line_ep);
        for (y = 0; y < 2; y++) free(arr_ep[y]);
        free(arr_ep);
    }

    free_stack_ep(top_ep);
    fclose(file);
    return 0;
}
