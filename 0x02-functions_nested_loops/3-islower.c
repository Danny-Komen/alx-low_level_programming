#include "main.h"

/**
 * _islower - check if its lower case
 * Description:is it lowercase?
 * c - a character type parameter
 * Description: this id the character we are testing
 * Return: 1 or 0
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
