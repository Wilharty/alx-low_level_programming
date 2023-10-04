#include "main.h"
/**
 * _puts_recursion - function that prints a string, f by a nl
 * @s: the pointer to the first char of the input string
 */
void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		_putchar('\n');
	/* recursion code */
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
