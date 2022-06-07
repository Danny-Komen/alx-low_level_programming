#include "main.h"

/**
 * _isalpha - checkes is c is a letter
 * @c: character being checked
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
