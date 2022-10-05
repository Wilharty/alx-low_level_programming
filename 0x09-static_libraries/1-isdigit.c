#include "main.h"
/**
 *_isdigit - funct that checks for a digit (0 through 9)
 *@c: variable
 *Return: 1 if a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
