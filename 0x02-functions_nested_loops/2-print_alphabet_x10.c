#include "main.h"
/**
 * print_alphabet_x10 - funct that prints the alph 10 X in low f by a nl
 * Return: 0 if success
 */
void print_alphabet_x10(void)
{
	char low_10 = 'a';
	int nmber = 1;

	while
		(nmber < 11)
	{
		while
			(low_10 <= 'z')
		{
			_putchar(low_10);
			low_10++;
		}
		_putchar('\n');
		low_10 = 'a';
		nmber++;
	}
}
