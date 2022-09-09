#include <stdio.h>

/*
 *  main - Prints the size of various types on the computer it's compiled
 *
 *  return: 0 if success
 */
int main(void)
{
	/*sizeof op is used to evaluate the size of a variable*/
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a floatType: %d byte(s)\n", sizeof(float));
	return (0);
}
