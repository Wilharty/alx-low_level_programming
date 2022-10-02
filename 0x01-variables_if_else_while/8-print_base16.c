#include <stdio.h>
/**
 * main - prints all numbers of base 16 in low, f by a nl
 * Return: 0
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	char c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
