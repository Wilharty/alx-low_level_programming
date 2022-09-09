#include <stdio.h>

/*
 *  main - Prints the size of various types on the computer it's compiled
 *
 *  return: 0 if success
 */
int main(void)
{
	char charType;
	int integerType;
	long int long_integerType;
	long long int long_long_integerType;
	float floatType;
	/*sizeof op is used to evaluate the size of a variable*/
	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %d byte(s)\n", sizeof(long_integerType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long_long_integerType));
	printf("Size of a floatType: %d byte(s)\n", sizeof(floatType));
	return (0);
}
