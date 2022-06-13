#include "main.h"

/**
 * puts2 - prints charcters of the string
 * str: string to be printed
 * Return: null
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
