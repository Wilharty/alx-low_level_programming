/**
 * _puts - Prints a string f by a nl
 * @str: string to print
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);

		len++;
	}
	_putchar('\n');
}
