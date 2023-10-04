#include "main.h"
/**
 * _pow_recursion - funct that returns value of x raised to power of y
 * @x: the number whom whill be raised by y
 * @y: the raised number
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	/* base cases */
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	/*recursion */
	else
		return (x * _pow_recursion(x, (y - 1)));
}
