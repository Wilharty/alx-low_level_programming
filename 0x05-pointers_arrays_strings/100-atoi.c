/**
 * _atoi - Converts a string to an integer
 * @s: the input string
 *
 * Return: the integer from the input string, 0 if no string
 */
int _atoi(char *s)
{
	int len = 0;
	int integer;

	while (*(s + len))
	{
		if (s[len] !
