#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: the pointer to the first char of the input string
 */
void _print_rev_recursion(char *s)
{
	/* cette fonction n'a pas besoin de base case */
	/* our recursion funct *s) */
	if (*s)
	{
		_print_rev_recursion(s + 1); /* et non ++s */
		_putchar(*s);
	}
}
