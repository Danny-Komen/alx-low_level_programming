#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: length of array
 * @argv: array of strings
 * Return: int
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
