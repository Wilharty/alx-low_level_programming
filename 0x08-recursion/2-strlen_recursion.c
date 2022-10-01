#include "main.h"
/**
 * _strlen_recursion - funct that returns the length of a string
 * @s: pointer to the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		_putchar('\0');
	else
		n = 1 + _strlen_recursion(s + 1);
return (n);
}
