#include <stdio.h>

/*
 *  main - Entry point
 *
 *  return: 0 if success
 */
int main(void)
{
	char charType;
	int integerType;
	long int long_integerType;
	long long int long_long_intergerType;
	float floatType;
	/*sizeof operator is used to evaluate the size of a variable*/
	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %ld byte(s)\n", sizeof(integerType));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long_integerType));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(long_long_integerType));
	return (0);
}
