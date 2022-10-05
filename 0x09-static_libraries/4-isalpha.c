#include "main.h"
/**
 * _isalpha - funct that checks for alphab chars
 * @c: var between upp 65-90 and low 97-122
 * Return: 1 if it's a letter: low or upp. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
