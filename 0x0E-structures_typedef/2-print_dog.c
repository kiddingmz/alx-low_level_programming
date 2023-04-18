#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			(*d).name = "(nil)";
		if (d->owner == NULL)
			(*d).owner = "(nil)";
		printf("Name: %s\nAge: %.6f\nOwner: %s", (*d).name, (*d).age, (*d).owner);
	}
	printf("\n");
}
