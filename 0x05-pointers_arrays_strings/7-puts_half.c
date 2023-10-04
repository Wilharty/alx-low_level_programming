#include "main.h"
/**
 * puts_half - Prints half of a str, f by a nl
 * @str: the input string
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	if ((len + 1) % 2)
	{
		len = len / 2;
		while (str[len] != '\0')
			_putchar(str[len++]);
	}
	else
	{
		len = (len - 1) / 2;
		while (str[len] != '\0')
			_putchar(str[len++]);
	}
	_putchar('\n');
}
