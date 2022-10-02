#include <stdio.h>
/**
 * main - prog that print all possible combi of 2 digits in order
 * Return: 0
 */
int main(void)
{
	int first;
	int second;

	first = 0;
	while (first < 10)
	{
		second = 0;
		while (second < 10)
		{
			if (first != second && first < second)
			{
				putchar('0' + first);
				putchar('0' + second);

				if (first + second != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
