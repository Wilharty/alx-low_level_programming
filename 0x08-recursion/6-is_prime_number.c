#include "main.h"
/**
 * is_prime_number - func that ret 1 if the int is a prime number, otherwise 0
 * @n: the input number
 * Return: 1 for true, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: the input number
 * @val: the check variable
 * Return: check
 */
int check_prime(int n, int val)
{

	if (val >= n && n > 1)
		return (1);
	else if (n % val == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, val + 1));
}
