#include "main.h"

/*
 * print_alphabet_x10 - print the alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alp;

		for (alp = 'a'; alp <= 'z' ; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
