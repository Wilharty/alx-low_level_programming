#include "main.h"
/**
 * _islower - funct that checks for low chars
 * @c: variable between 97 and 122
 * Return: 1 if it's low, 0 otherwise
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
