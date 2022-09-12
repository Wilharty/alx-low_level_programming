#include <stdio.h>
#include <time.h>
/*Prog to print whether the nmber stored in the var n is pos or neg*/
/**
 * main - Entry point of program
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
