#include "main.h"

/**
 * print_last_digit - the last digit of a number is printed
 * @x: the input
 * Return: an integer value
 */
int print_last_digit(int b)
{
	if (b < 0)
	{
		b = -(b % 10);
	}
	else if (b > 0)
	{
		b = b % 10;
	}
	else
	{
		b = 0;
	}
	_putchar(b + '0');
	return (b);
}
