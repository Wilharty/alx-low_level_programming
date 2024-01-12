#include "main.h"
/**
 *_sqrt_recursion - funct that returns natural square root of a number
 *@n: the given number
 *Return: the square if n have it, otherwise return -1
 */
int _sqrt_recursion(int n)
{
	return (_sq(n, 1));
}

/**
 * check_sq - funct that checks for the natural square root of n
 * @n: the given number
 * @square: the quare to check
 * Return: the verified square
 */
int check_sq(int n, int square)
{
	if (square * square == n)
		return (n);
	else if (square * square > n)
		return (-1);
	else
		return (_sq(n, square + 1));
}
