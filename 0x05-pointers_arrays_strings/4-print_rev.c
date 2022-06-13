#include "main.h"

/**
 * print_rev - print in reverse order
 * @s: string to be printed
 * Return : null
 */

void print_rev(char *s)
{
	int i;
	int x;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}

	x = 1;
	while (x <=i)
	{
		_putchar(*(s - x));
		x++;
	}
	_putchar('\n');
}
