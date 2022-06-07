#include "main.h"

/*
 * jack_bauer - ..
 * Description: time
 * Returns nothing
 */
void jack_bauer(void)
{
	int mn;
	int hr;

	for (hr = 00; hr <= 23; hr++)
	{
		for (mn = 00; mn <= 59; mn++)
		{
			_putchar(hr);
			_putchar(:);
			_putchar(mn);
		}
	}
}
