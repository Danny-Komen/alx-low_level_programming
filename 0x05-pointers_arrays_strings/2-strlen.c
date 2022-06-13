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
	char str[100];

	str = *s; 
	for(i = 0; str[i] != '\0'; i++)
    	{
        	x++;
	}

	return x;
}
