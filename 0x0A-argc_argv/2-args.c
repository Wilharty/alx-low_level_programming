#include <stdio.h>
/**
 * main - prog that prints all arguments it receives
 * @argc: nmber of arguments
 * @argv: array of argc's size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
