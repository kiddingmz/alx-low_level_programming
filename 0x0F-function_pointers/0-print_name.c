#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - print name
 *
 * @name: name
 * @f: function
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
