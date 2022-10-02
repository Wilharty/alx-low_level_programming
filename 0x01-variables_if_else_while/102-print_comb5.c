#include <stdio.h>
/**
 * main - prog that print all possible combi of two 2-digit nmbers
 * Return: 0
 */
int main(void)
{
int _sec;
int _fir;
int sec;
int fir;

fir = 0;
while (fir < 10)
{
	sec = 0;
	while (sec < 10)
	{
		_fir = 0;
		while (_fir < 10)
		{
			_sec = 0;
			while (_sec < 10)
			{
				if (!(fir == _fir && sec == _sec))
				{
					putchar('0' + fir);
					putchar('0' + sec);
					putchar(' ');
					putchar('0' + _fir);
					putchar('0' + _sec);
					if (!(fir + sec == 18 && _fir + _sec == 17 && _fir == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				_sec++;
			}
			_fir++;
		}
		sec++;
	}
	fir++;
}
putchar('\n');
return (0);
}
