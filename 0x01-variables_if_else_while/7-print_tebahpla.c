#include <stdio.h>
/**
 * main - prog that print alph in low in reverse, f by a nl
 * Return: 0
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');

	return (0);
}
