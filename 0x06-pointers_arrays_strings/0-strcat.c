#include "main.h"

/**
 * _strcat - concatnates
 * @dest: destination
 * @str: the string
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	char *d;
	int i;

	i = 0;
	while (*dest != NULL)
	{
		*d = *dest;
		d++;
		dest++;
		i++;
	}

	while (*src != NULL)
	{
		*d = *scr;
		d++;
		scr++;
		i++;
	}

	*d = '\0';
	d = d - i;

	return (*d);
}

