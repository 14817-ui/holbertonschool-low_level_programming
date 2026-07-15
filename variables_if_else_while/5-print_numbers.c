#include <stdio.h>

/**
 * main - Prints all single digit numbers starting from 0
 *
 * Return: 0
 */

int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		printf("%c", n);
	}
	printf("\n");

	return (0);
}
