#include <stdio.h>
/**
 * main - prog that prints the nmber of arg passed into it
 * @argc: nmber of arguments
 * @argv: array of argc's size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
