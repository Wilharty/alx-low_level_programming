#include "main.h"
/**
 * print_sign - funct that prints the sign of a nmber
 * @n: variable
 * Return: 1, 0 or -1 and +, 0 0r - if it's >, 0 or < than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{

		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
