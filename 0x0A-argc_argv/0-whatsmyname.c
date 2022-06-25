#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * argc: length of array
 * argv: array of strings
 * Return: int
 */

int main(int argc, char *argv[])
{
	printf("%c", *argv[0]);

	return (0);
}
