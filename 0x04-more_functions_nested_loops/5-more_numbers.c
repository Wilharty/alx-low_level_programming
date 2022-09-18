#include "main.h"
/**
 * more_numbers - funct that print 10 times nmbers from 0 to 14, f by a nl
 */
void more_numbers(void)
{
	int mul, i;

	for (mul = '0'; mul <= "10"; mul++)
	{
		for (i = '0'; i <= "14"; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
				_putchar('\n');
	}
}
