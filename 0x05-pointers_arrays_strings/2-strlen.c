#include "main.h"

/**
 * _strlen - prints the length of the variable
 * @s: the variable to be tested
 * Return: integer
 */
int _strlen(char *s)
{
	int x;
	int i;

	for(i = 0; *s != '\0'; i++)
    	{
        	x++;
		s++;
	}

	return x;
}
