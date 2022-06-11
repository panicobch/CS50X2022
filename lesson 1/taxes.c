#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

// This program is to calculate how much taxes has a product with the taxez included
int main (void)
{

    // Product prices, with the taxes
    float x = get_float ("Price of the product? ");

    //Percent of the taxes
    float y = get_float ("Taxes? ");

    y = 1 + y/100;

    printf ("The product cost without thieve = %2f", x/y);
}