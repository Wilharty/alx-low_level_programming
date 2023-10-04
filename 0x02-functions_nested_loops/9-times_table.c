#include "main.h"
/**
 * times_table - funct that print the 9 times times tables start with 0
 */
void times_table(void)
{
	int table, value, result;

	table = 0;
	while
		(table < 10)
	{
		value = 0;
		while
			(value < 10)
		{
			result = table * value;
			if (value == 0)
			{
				_putchar(result + '0');
			}
			if (value != 0 && result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			if (result >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			value++;
		}
	_putchar('\n');
	table++;
	}
}
