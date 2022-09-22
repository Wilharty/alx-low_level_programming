#include "main.h"
#include <stdio.h>
/**
 * print_array - funct that prints n elem of an arr of int, f by a nl
 * @a: desc
 * @n: desc
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
				printf("\n");
}
