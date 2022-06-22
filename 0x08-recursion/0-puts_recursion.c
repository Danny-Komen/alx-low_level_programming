#include "main.h"

/*
 * _puts_recursion - prints a sring
 * @s: the string to be printed
 * Return: null
 */

void _puts_recursion(char *s)
{
	while (*s != NULL)
	{
		_putchar(*s);
		s++;
	}

	_putchar('\0');
}
