#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: nmber of arg
 * @argv: array of argc's size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int value;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (value = 1; value < argc; value++)
		{
			if (!isdigit(*argv[value]))
				printf("Error\n");
			else
				sum = sum + atoi(argv[value]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
