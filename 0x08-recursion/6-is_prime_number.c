#include "main.h"
/**
 * is_prime_number - funct that returns 1 if the input is a prime number
 * @n: the input integer
 * Return: 1 if it's, otherwise 0
 */
int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}

/**
 * check_prime_number - funct that checks if a number is prime or not
 * @n: the given number to check
 * @testeur: the test number
 * Return: 1 if ti's, otherwise 0
 */
int check_prime_number(int n, int testeur)
{
	/* base cases */
	if (testeur >= n && n > 1)
		return (1);
	else if (n % testeur == 0 || n <= 1)
		return (0);
	/* recursion */
	else
		return (check_prime_number(n, testeur + 1));
}
