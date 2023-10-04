/**
 * *_strcat - Appends the src string to the dest string
 * @dest: the pointer to the string to appends
 * @src: the pointer to the string whose going to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++; /*en end, on sera sur le last char de dest*/

	while (*src) /*jusq ce que tout src ne soit parcouru*/
	{
		*dest = *src; /*le prem char de src remp le dern de dest*/
		dest++; /*on move sur le dernier char encore une fois*/
		src++; /*il move sur le proch qu'il fera remp dans dest*/
	}

	return (dest); /*on aura donc Hello World!*/
}
