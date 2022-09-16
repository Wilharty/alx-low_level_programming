#include "main.h"
/**
 * jack_bauer - funct that print every min of jack bauer's day, 0:00 to 23:59
 * h: variable hour
 * m: variable min
 * Return: 0 if success
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
