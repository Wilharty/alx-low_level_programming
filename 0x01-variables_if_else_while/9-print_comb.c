#include <stdio.h>
/**
 * main - prog that print all combi of single digit nmbers
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while
		(i <= 9)
	{
		putchar(i);

		if (i <= 8)
		{
			putchar(',');
			putchar(' ');
		}
			i++;
			putchar('\n');
	}

return (0);
}
