#include "main.h"
/**
 * _isupper - funct that checks for upper char
 * @c: variable upper char
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	signed char upper = signed char(c);

	if (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
