#include "main.h"

/*
 * _puts_recursion - prints a sring
 * @s: the string to be printed
 * Return: null
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	_putchar(_puts_recursion(s++));
	_putchar('\0');
}
