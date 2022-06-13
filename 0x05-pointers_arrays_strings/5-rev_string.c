#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to be reversed
 * Return: null
 */

void rev_string(char *s)
{
	int w;
	int i;
	int temp;

	w = 0;
	while (*s != '\0')
	{
                w++;
                s++;
        }

	for (i = 0; i < w/2; i++)  
    	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
