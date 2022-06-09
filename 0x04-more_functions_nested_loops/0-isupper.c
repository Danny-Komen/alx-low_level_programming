#include "main.h"

/**
 * _isupper - check if its lower case
 * Description:is it lowercase?
 * @c: a character type parameter
 * Return: 1 or 0
 */
int _islower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
