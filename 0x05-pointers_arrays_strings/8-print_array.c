#include "main.h"
#include <stdio.h>

/**
 * print_array - print a number of elements from an array
 * @a: the array
 * @n: the amount
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (*a != '\0' && i < n)
	{
		if ((i + 1) == n)
		{
			printf("%d", *a);
		}
		else
		{
			printf("%d, ", *a);
		}
		a++;
		i++;
	}
	printf("\n");
}
