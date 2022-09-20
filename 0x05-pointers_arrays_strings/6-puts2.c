#include "main.h"
/**
 * puts2 - func that prints every other char of a string
 * @str: variable to print
 */
void puts2(char *str)
{
	int i = 0;

	while
		(str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
			_putchar('\n');
}
