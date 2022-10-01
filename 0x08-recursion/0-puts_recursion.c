#include "main.h"
/**
 * _puts_recursion - funct that prints a string, f by a nl
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
