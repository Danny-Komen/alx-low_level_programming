#include "main.h"

/**
 * puts_half - prints half of the string
 * @str - the string to be printed
 */

void puts_half(char *str)
{
	int size;
	int n;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}

	str = str - size;
	
	if ((size % 2) == 0)
	{
		n = size / 2;	
	}
	else
	{
		n = (size - 1) / 2;
	}

	str = str + n;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('n');
}
