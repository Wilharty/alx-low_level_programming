#include "main.h"
/**
 * _abs - funct that computes the abs path val of an int
 * @i: integer variable
 * Return: -i if success, otherwise i
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
