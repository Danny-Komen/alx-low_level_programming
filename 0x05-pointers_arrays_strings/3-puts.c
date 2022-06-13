#include "main.h"

/**
 * _puts - printss string
 *@str: string to be printed
 *Return: null
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(str[i]);
		i++;
		str++;
	}
	_putchar('\n');
}
