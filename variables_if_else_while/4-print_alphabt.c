#include <stdio.h>

/**
 * main - Prints th aphabt in lowrcas (no e & q)
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');


	return (0);
}
