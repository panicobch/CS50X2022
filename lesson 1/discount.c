#include <stdio.h>
#include "cs50.h"
#include "cs50.c"

int main (void)
{
    // We give then the price of the product
    float x = get_float ("Price of the product, please: ");

    // And the % of the discount
    float y = get_float ("How many is the discount? ");

    // We operate 
    y = 1 - y/100;
    
    // Print the result
    printf("%.2f \n", x*y);

}