#include <stdio.h>
/**
 * print_array - Prints n elements of an array of int, f by a nl
 * @a: pointer to the array
 * @n: the num of element of the array
 */
void print_array(int *a, int n)
{
	int len = 0;

	while (*(a + len) != '\0') /*also works a[len]*/
	{
		printf("%d", *(a + len++));

		if (len < n)
			printf(", ");
	}
	printf("\n");
}
