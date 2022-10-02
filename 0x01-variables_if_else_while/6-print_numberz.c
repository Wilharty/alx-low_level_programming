#include <stdio.h>
/**
 * main - prog that prints all single base10 digit start by 0, f by a nl
 * Return: always 0
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
		putchar('\n');
return (0);
}
