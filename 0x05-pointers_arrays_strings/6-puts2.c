#include "main.h"
/**
 * puts2 - Print every other char of a str, start with 1st char, f by a nl
 * @str: the input string
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	for (; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
