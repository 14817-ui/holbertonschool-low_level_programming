#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to search
 * @accept: characters allowed in the prefix
 *
 * Return: number of bytes in the initial segment of s
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			break;
			j++;
		}

		if (accept[j] == '\0')
		break;

		i++;

	}
	return (i);
}

