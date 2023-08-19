#include <stdio.h>
/**
 * main - prints all single digit nmbers of base 10 start fr 0, f by a nl
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
		putchar(i++ + '0');

	putchar('\n');

	return (0);
}
