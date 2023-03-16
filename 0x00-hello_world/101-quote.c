#include<unistd.h>

/**
 * main - Entry point
 *
 * Return: 1
 */

int main(void)
{
	char ms[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int ta = sizeof(ms) / sizeof(char);

	write(1, ms, ta);

	return (1);
}
