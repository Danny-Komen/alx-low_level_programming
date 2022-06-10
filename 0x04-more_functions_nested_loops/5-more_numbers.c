#include "main.h"

/**
 * more_numbers - ten times
 */
void more_numbers(void)
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		int c;

		for (c = 0; c <= 14; c++)
		{
			_putchar(c + '0');
		}

		_putchar('\n');
	}
}
