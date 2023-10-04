#include "main.h"
/**
 * print_alphabet - function that prints alph in low f by a ml
 * Return: 9 if success
 */
void print_alphabet(void)
{
	char low = 'a';

	while
		(low <= 'z')
	{
		_putchar(low);
		low++;
	}
		_putchar('\n');
}
