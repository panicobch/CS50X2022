# include <stdio.h>
# include "cs50.h"
# include "cs50.c"

int main (void)
{
    int x = get_int ("Please, type a number: ");
    if (x % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}