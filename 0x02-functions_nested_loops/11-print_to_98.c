#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - funct that print all Q nmbers from n to 98 in order, f by a nl
 * @n: the first printed nmber
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
		}
			n++;
	}
	while (n > 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
		}
			n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
