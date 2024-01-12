#include "main.h"
/**
 * is_palindrome - Fonct that returns 1 if a str is a palindrome, 0 if not
 * @s: the pointer to the first char of the given string
 * Return: 1 fi it's, otherwise 0
 */
int is_palindrome(char *s)
{
	int length = _strlen__recursion(s, 0);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - funct that checks if a str is a palindrome or not
 * @s: pointer to the first char of the given string
 * @begin: 0
 * @end: length - 1
 * Return: 1 if it's, 0 otherwise
 */
int check_palindrome(char *s, int begin, int end)
{
	/* base case */
	if (s[begin] != s[end])
		return (0);
	else if (begin >= end)
		return (1);

	/* recursion */
	else
		return (check_palindrome(s, begin + 1, end - 1));
}

/**
 * _strlen__recursion - funct that returns the length of a string
 * @s: the pointer to the first char of the input string
 * @len: 0
 * Return: the length of the input str
 */
int _strlen__recursion(char *s, int len)
{
	if (*s)
		len = 1 + _strlen__recursion(s + 1, len);

	return (len);
}
