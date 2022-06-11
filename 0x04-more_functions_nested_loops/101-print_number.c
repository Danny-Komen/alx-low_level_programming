# include "main.h"

/**
 * print_number - prints integer
 * @n: the number to be printed
 * Return: null
 */
void print_number(int n)
{
	if (n < 0) {
        	putchar('-');
        	n = -n;
	}
 
    	// Remove the last digit and recur
    	if (n/10)
        	print(n/10);
 
    	// Print the last digit
    	putchar(n%10 + '0');
}
