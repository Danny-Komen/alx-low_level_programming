#include "main.h"

/**
 * swap_int - swaps the values of two variables
 * @a: first int
 * @b: second int
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
