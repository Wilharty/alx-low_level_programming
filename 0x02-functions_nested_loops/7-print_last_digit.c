#include "main.h"
/**
 * print_last_digit - funct that print the last digit of a nmber
 * @n: number
 * Return: l if success
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l != 0)
	{
		_putchar('l');
		return (l);
	}
	else
	{
		_putchar('l');
		return (0);
	}
}
