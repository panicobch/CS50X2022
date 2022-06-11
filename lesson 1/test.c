#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

int main (void)
{
    char c = get_char ("Do you agree?? " );
    if (c == 'y')
        {
            printf("Nice, we agree :) \n");
        }
    else if (c == 'n')
        {
            printf(":(\n");
        }
    else
        {
            printf("Please, rerun the program and type y for yes or n for no\n");
        }
}