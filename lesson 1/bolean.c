#include <stdio.h>
#include "cs50.h"
#include "cs50.c"
int main (void)
{
    int x = 0;
    int y = get_int ("Cuantos gatos tienes? ");
    while (x < y)
    {
        printf("meow\n");
        x = x + 1;
    }
}