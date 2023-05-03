#include "main.h"

/**
 * _strlen_recursion - length
 *
 * @s: string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares string
 *
 * @s: string
 * @n1: first iterator
 * @n2: second iterator
 *
 * Return: int
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - check a string is a palindrome
 *
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}

