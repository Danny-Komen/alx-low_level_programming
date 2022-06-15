# include "main.h"

/**
 * _strncat - concatnated a limmited number ofcharacters
 * @dest: destination
 * @src: source
 * @n: number of cahracters
 * Return: a String pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *d;
	int i;
	int l;

	i = 0;
	while (*dest != NULL)
	{
		*d = *dest;
		d++;
		dest++;
		i++;
	}

	*d = " ";
	d++;
	i++;

	l = 0;
	while (*src != NULL)
	{
		if (l >= n)
		{
			d = d - i;
			return (*d);
		}

		*d = *scr;
		d++;
		scr++;
		i++;
		l++;
	}

	*d = '\0';
	d = d - i;

	return (*d);
}
