#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 * Return: null
 */

void rev_string(char *s)
{
	int w;

        while (*s != '\0')
        {
                w++;
                s++;
        }

	char arr[w];
	s = s - w;
	int i;

	for (i = w; i > 0; i--)
	{
		arr[i] = *s;
		s++;
	}

	*s = arr[];
}	
