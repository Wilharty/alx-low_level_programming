#include <stdio.h>
/**
 * main - prog that print the alph in lower, and then in upper, f by a nl
 * Return: 0 if success
*/
int main(void)
{
	char low = 'a';
	char upp = 'A';

	while
		(low <= 'z' && upp <= 'Z')
			{
				putchar(low);
				low++;
				putchar('\n');
				putchar(upp);
				upp++;
			}
