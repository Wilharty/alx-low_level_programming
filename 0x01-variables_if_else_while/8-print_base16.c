#include <stdio.h>
/**
 * main - prints all nmbers of base 16 in low, f by a nl
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	char b = 'a';

	while (a < 11 && b < 'g')
		putchar(a < 10 ? a++ + '0' : b++);

	putchar('\n');

	return (0);
}
