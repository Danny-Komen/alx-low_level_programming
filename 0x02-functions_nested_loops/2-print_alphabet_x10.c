#include "main.h"

/*
 * print the alphabets 10 times
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char alp;

		for (alp = 'a'; alp <= 'z' ; alp++)
		{
			_putchar(alp);
		}
	}
	_putchar('\n');
}
