#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: source
 * @n: limit
 * Return: string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int l;
	int i;

	i = 0;
	l = 0;
	while (*dest != NULL)
	{
		if (l >= n)
		{
			src = src - i;
			return *src;
		}

		*src = *dest;
		src++;
		dest++;
		l++;
		i++;
	}

	scr = src - i;

	return (*src);
}
