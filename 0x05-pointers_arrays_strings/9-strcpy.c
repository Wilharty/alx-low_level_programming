/**
 * *_strcpy - Copies the str pointed by src to buffer pointed by dest
 * @dest: pointer to where the str will be copied
 * @src: pointer to the str source who will be copied to dest
 *
 * Return: value of the pointer to dest -> dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len))
	{
		dest[len] = *(src + len);
		len++;
	}

	return (dest);
}
