#include "main.h"

/**
 * main - prints its name
 * argc: length of array
 * argv: array of strings
 * Return: int
 */

int main(int argc, char *argv[])
{
	while (*argv[0] != '\0')
	{
		_putchar(*argv[0]);
		argv[0]++;
	}

	return (0);
}
