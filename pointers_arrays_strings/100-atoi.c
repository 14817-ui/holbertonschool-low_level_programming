#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	unsigned int n, limit, max;
	int sign, digit;

	n = 0;
	sign = 1;
	max = ~0U >> 1;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		sign = -sign;
		s++;
	}

	if (!*s)
	return (0);

	limit = (sign < 0) ? max + 1 : max;
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (n > limit / 10 || (n == limit / 10
		&& (unsigned int)digit > limit % 10))
		return ((sign < 0) ? (int)~(limit - 1) : (int)limit);
		n = n * 10 + (unsigned int)digit;
		s++;
	}

	if (sign < 0)
	{
		if (n == max + 1)
		return ((int)~max);
		return (-(int)n);
	}

	return ((int)n);
}

