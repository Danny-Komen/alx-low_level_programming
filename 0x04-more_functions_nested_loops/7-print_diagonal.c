#include "main.h"
 /**
  * print_diagonal - print diagonals
  * @n: number of lines
  */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a;
		int b;

		for(a = 0; a< n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (a == b)
				{
					_putchar(92);
				}
				else
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
