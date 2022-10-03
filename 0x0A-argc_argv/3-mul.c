#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: nmber of arg
 * @argv: array of arg's size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}
