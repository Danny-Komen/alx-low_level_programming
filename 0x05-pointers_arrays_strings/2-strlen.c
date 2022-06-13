#include "main.h"

/**
 * _strlen - prints the length of the variable
 * @s: the variable to be tested
 * Return: integer
 */
int _strlen(char *s)
{
	int x;

	x = 0;
	while (*s != '\0')
	{
		x++;
		s++;
	}

	return (x);
}
