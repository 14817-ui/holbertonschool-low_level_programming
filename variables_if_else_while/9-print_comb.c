#include <stdio.h>

/**
 * main - Prints all single digit numbers starting from 0 with ,
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n + '0');

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
