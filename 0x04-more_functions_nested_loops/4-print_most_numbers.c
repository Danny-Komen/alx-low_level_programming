#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 */
void print_numbers(void)
{
	char i;

	for (i  = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			break;
		}
		else
		{
			_putchar(i);
		}

	}
	_putchar('\n');
}
