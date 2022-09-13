#include <stdio.h>
#include <stdlib.h>
/**
 * main - prog that print the alph in lwcase, f by a new l
 * Return: Always 0 (Success)
*/
int main(void)
{
	char low = 'a';
	
	while(low <= 'z')
		{
			putchar("%c ", low);
			low ++;
			putchar("\n");
		}

	return (0);
}
