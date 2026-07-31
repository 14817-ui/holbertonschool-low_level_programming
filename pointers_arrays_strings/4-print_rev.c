#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: String to print in reverse
 *
 * Return: Nothing
 */
	void print_rev(char *s)
	{
		int length;

		length = 0;

		while (s[length] != '\0')
		{
			length++;
		}

		length--;

		while (length >= 0)
		{
			_putchar(s[length]);
			length--;
		}

		_putchar('\n');
	}

