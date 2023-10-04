/**
 * print_rev - Prints a string, in reverse, f by a nl
 * @s: string to print
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	for (; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
