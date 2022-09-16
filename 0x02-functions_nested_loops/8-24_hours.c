#include "main.h"
/**
 * jack_bauer - funct that print every min of jack bauer's day, 0:00 to 23:59
 * h: variable hour
 * m: variable min
 * Return: 0 if success
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	while
		(m < 60)
	{
		while
			(h < 24)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar(h + '0');
			}
			else
			{
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
		_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar(m + '0');
			}
			else
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
				_putchar('\n');
		}
			h = 0;
			h++;
	}
}
