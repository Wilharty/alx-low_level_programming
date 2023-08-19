#include <stdio.h>
/**
 * main - Prints the alphabet in low, f by a nl
 *
 * Return: Always 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
