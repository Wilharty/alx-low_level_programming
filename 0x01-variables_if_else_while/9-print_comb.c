#include <stdio.h>
/**
 * main - prints all possible combinations of single digit nmbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	return (0);
}
