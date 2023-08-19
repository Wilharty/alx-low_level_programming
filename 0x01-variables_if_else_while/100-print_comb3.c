#include <stdio.h>
/**
 * main - prints all possible combinations of two digit nmbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if ((j != i) && (i < j))
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i < 8 || j < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
