#include <unistd.h>

/**
 * _putchar - print char
 *
 * @c: char
 *
 * Return: 1 or -1
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
