#include "main.h"
/**
 * _pow_recursion - funct that returns the value of x raised to the power of y
 * @x: la valeur
 * @y: la puissance
 * Return: -1 as error if y < 0, x pow y otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
