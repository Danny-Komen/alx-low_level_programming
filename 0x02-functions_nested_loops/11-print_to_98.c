#include "main.h"

/**
 * print_to_98 - prints around 98
 * @n: is the input
 * Return: null
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n == 98)
	{
		_putchar('98');
	}
	else
	{
                for (n = n; n >= 98; n--)
                {
                        _putchar(n + '0');
                        _putchar(',');
                        _putchar(' ');
                }
        }
}
