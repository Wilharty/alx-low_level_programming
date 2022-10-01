#include "main.h"
/**
 * factorial - funct that returns the factorial of a given number
 * @n: given number
 * Return: -1 as error if n < 0, !n otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
