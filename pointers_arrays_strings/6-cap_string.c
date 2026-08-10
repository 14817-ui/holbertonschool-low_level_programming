#include "main.h"

/**
 * cap_string - Capitalizes all words in a string
 * @s: String to modify
 *
 * Return: Pointer to the modified string
 **/

char *cap_string(char *s)
{
	int i;
	int j;
	char separators[] = " \t\n,;.!?"() {} ";

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';

		j = 0;

		while (separators[j] != '\0')
		{
		if (s[i] == separators[j] && s[i + 1] >= 'a'
		&& s[i + 1] <= 'z')
		{
			s[i + 1] = s[i + 1] - 'a' + 'A';
		}
		j++;
	}
	i++;
	}

	return (s);
}

