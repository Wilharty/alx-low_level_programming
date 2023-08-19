#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse, f by a nl
 *
 * Return: 0
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
		putchar(i--);

	putchar('\n');

	return (0);
}
