#include <stdio.h>

/**
 * main - Prints all hexadecimal numbers in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
