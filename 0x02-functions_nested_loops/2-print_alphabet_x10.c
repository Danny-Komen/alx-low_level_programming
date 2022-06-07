#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase x10
 * Description: print alphabet prints alphabet in lowercase x10
 * Returns nothing
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
