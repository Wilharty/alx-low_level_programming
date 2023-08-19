#include <stdio.h>
/**
 * main - prints all possible combinations of three digit nmbers
 *
 * Return: Always 0
 */
int main(void)
{

	int a = 0;
	int b = 0;
	int c = 0;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{

				if ((b != a) && (a < b) &&
						(c != b) && (b < c))
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');

					if ((a < 7 || b < 8 || c < 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
