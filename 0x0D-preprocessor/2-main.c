#include <stdio.h>
/**
 * main - prog that prints name of the file it was compiled from, f by a nl
 * Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
