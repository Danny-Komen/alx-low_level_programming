#include "main.h"

/**
 * puts2 - prints charcters of the string
 * str: string to be printed
 * Return: null
 */

void puts2(char *str)
{
	int e;

	e = 0;
	while (*str != '\0')
	{
		if ((e % 2) == 0)
		{
			_putchar(*str);
		}

		str++;
		e++;
	}
	_putchar('\n');
}
