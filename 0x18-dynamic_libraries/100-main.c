#include "py.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
 
int main(void)
{
   int a, b;
   
   a = 10;
   b = 2;
   printf("ADD: %d\n", add(a, b));
   printf("DIV: %d\n", div(a, b));
   printf("SUB: %d\n", sub(a, b));
   printf("MOD: %d\n", mod(a, b));
   printf("MUL: %d\n", mul(a, b));
    return (EXIT_SUCCESS);
}
