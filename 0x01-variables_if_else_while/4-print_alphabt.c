#include <stdio.h>
/**
 * main - prog that print the alph in lower, and then in upper, f by a nl
 * Return: 0 if success
*/
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		{
			putchar(low);
		}
			low++;
	}
			putchar('\n');
	return (0);
}
