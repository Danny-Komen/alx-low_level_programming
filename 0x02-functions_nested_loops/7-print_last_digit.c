#include "main.h"

/**
 * print_last_digit - the last digit of a number is printed
 * @x: the input
 * Return: an integer value
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
	{
		x = -1 * x;
	}
	y = x % 10;
	_putchar(y + '0');
	return (y);
}
