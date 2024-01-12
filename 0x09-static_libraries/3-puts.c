#include "main.h"
/**
 * _puts - funct that prints a string, f by a ml
 * @str: to print
 */
void _puts(char *str)
{
	while
		(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
		_putchar('\n');
}
