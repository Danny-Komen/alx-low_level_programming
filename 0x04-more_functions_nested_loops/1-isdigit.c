#include "main.h"

/**
 * _isdigit - check if its a digit
 * @c: a character type parameter
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
