#include "main.h"

/**
 * _atoi - convert string to int
 * @s: the string to be converted
 * Return: integer type
 */

int _atoi(char *s)
{
	int x;
	char c;

	while (*s != '\0')
	{
		if ((*s > 47 && *s < 58) || *s == 43 || *s == 45)
		{
			c = c + *s;
		}
		s++;
	}

	if (c == null)
	{
		return (0);
	}

	x = int(c);

	return (x);
}
