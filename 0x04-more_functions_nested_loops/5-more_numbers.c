#include "main.h"

/**
 * more_numbers - ten times
 */
void more_numbers(void)
{
	int i;
	int c;

	for(i = 0; i < 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');
		}

		_putchar('\n');
	}
}
