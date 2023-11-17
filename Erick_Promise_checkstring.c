#include "monty.h"

bool check_string_ep(char *string)
{
    int p;
    bool check_ep = true;
    for (p = 0; string[p]; p++)
    {
        if (!isalpha(string[p]) && !isdigit(string[p]))
        {
            check_ep = false;
            break;
        }
    }
    return check_ep;
}
