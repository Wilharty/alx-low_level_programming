#include "main.h"
/**
 * _sqrt_recursion - funct that returns the natural square root of a number
 * @n: the number
 * Return: -1 if doesn't have a natural square root, otherwise ...
 */
int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}

/**
 * _square - function to validate the square
 * @n: the number
 * @sqr: the possible square
 * Return: sqr if it's, -1 otherwise
 */
int _square(int n, int sqr)
{
	if (sqr * sqr == n)
		return (sqr);
	else if (sqr * sqr < n)
		return (_square(n, sqr + 1));
	else
		return (-1);
}
