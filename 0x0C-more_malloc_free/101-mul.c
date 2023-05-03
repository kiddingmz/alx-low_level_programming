#include <stdlib.h>
#include <stdio.h>

void *_calloc(unsigned int nmemb, unsigned int size);
int _strdigit(char *s);
void _puts(char *s);
void rev_num_str(int start, int end, char *ns);
int _strlen(char *s);
char *strmul(char *a, char *b);

/**
 * _calloc - allocate 
 *
 * @nmemb: elements
 * @size: size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (size == 0 || nmemb == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; ++i)
		c[i] = 0;
	return (c);
}

/**
 * _strdigit - check digit
 *
 * @s: string
 *
 * Return: 1 or 0
 */

int _strdigit(char *s)
{
	if (*s == '-' || *s == '+')
		s++;
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * _puts - print string
 *
 * @s: string to print
 *
 * Return: nothing
 */

void _puts(char *s)
{
	while (*s)
		putchar(*(s++));
}

/**
 * rev_num_str - reverse 
 *
 * @start: start
 * @end: end 
 * @ns: string
 *
 * Return: nothing
 */

void rev_num_str(int start, int end, char *ns)
{
	int i, j;
	char tmp;

	while (ns[end] == 0 && end != start)
		end--;
	for (i = start, j = end; i <= j; i++, j--)
	{
		tmp = ns[i] + '0';
		ns[i] = ns[j] + '0';
		ns[j] = tmp;
	}
}

/**
 * _strlen - length
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
		;
	return (i);
}

/**
 * strmul - multply two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: pointer
 */

char *strmul(char *a, char *b)
{
	int la, lb, i, j, k, l, neg = 0;
	char *result;
	char mul, mul_carry, sum, sum_carry;

	if (*a == '-')
	{
		neg ^= 1;
		++a;
	}
	if (*b == '-')
	{
		neg ^= 1;
		++b;
	}
	la = _strlen(a);
	lb = _strlen(b);
	result = _calloc(la + lb + 1 + neg, sizeof(char));
	if (result == NULL)
		return (NULL);
	if (neg)
		result[0] = '-';
	for (i = lb - 1, l = neg; i >= 0; --i, ++l)
	{
		mul_carry = 0;
		sum_carry = 0;
		for (j = la - 1, k = l; j >= 0; --j, ++k)
		{
			mul = (a[j] - '0') * (b[i] - '0') + mul_carry;
			mul_carry = mul / 10;
			mul %= 10;
			sum = result[k] + mul + sum_carry;
			sum_carry = sum / 10;
			sum %= 10;
			result[k] = sum;
		}
		result[k] = sum_carry + mul_carry;
	}
	rev_num_str(neg, k, result);
	return (result);
}

/**
 * main - multiply two numbers
 *
 * @argc: number of arguments
 * @argv: array
 *
 * Return: 0 or 98
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}
	if (!_strdigit(argv[1]) || !_strdigit(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}
	result = strmul(argv[1], argv[2]);
	if (result == NULL)
	{
		_puts("Error\n");
		exit(98);
	}
	_puts(result);
	putchar('\n');
	free(result);
	exit(EXIT_SUCCESS);
}
