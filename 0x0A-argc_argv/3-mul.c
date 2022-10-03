#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: nmber of arg
 * @argv: array of arg's size
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	int mul = argv[1] * argv[2];

	if (argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d", mul);
}
