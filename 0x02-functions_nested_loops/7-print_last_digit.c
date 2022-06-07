#include "main.h"

/*
 * print_last_digit - ...
 * Description: ...
 * @x: ...
 */
int print_last_digit(int x)
{
	int y;

	y = x % 10;
	_putchar(y);
	return (y);
}	
