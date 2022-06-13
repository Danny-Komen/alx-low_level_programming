#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 * Return: null
 */

void rev_string(char *s)
{
	int w;
	char q;

	*q = s;
        i = 0;
        while (*s != '\0')
        {
                _putchar(*s);
                w++;
                s++;
        }

	char arr[w];
	int i;

	for (i = w; i > 0; i--)
	{
		arr[i] = *q;
		q++;
	}

	*s = arr[];
}	
