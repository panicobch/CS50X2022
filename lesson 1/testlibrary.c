#include <stdio.h>
#include "cs50.c"
#include "cs50.h"

int main (void)
{
    int x = get_int("Cuanto mides?? ");
    if (x<150)
    {
        printf("ajajajaj, rebajito\n");
    }
    else
    {
        printf("respetable ^^\n");
    }
}