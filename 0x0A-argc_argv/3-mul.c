#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: nmber of arg
 * @argv: array of arg's size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
		return (0);
}
