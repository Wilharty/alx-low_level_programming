#include "main.h"
/**
 * print_last_digit - funct that print the last digit of a nmber
 * @n: number
 * Return: l if success
 */
int print_last_digit(int n)
{
	int l = (n % 10);

	if (n < 0)
		n = -n;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
