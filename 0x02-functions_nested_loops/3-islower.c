#include "main.h"
/**
 * _islower - funct that checks for low chars
 * Return: 1 if it's low, 0 otherwise
 */
int _islower(int c)
{
	char low = 'a';

	while
		(low <= 'z')
	{
		if (c <= 123)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		_putchar(low);
		_putchar('\n');
	}
return (0);
}
