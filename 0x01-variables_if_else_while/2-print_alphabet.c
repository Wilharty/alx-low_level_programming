#include <stdio.h>
#include <stdlib.h>
/**
 * main - prog that print the alph in lwcase, f by a new l
 * Return: Always 0 (Success)
*/
int main(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	putchar(low);
	putchar("\n");

	return (0);
}
