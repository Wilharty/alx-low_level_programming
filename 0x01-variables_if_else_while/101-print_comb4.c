#include <stdio.h>
/**
 * main - prog that prints all possible different combi of 3 digits, f by a nl
 * Return: 0
 */
int main(void)
{
	int thi;
	int sec;
	int fir;

	fir = 0;
	while (fir < 10)
	{
		sec = 0;
		while (sec < 10)
		{
			thi = 0;
			while (thi < 10)
			{
				if (thi != sec && sec != fir && fir < sec && sec < thi)
				{
					putchar('0' + fir);
					putchar('0' + sec);
					putchar('0' + thi);

					if (thi + sec + thi != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				thi++;
			}
			sec++;
		}
		fir++;
	}
	putchar('\n');
	return (0);
}
