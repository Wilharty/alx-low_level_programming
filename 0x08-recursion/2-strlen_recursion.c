#include "main.h"
/**
 * _strlen_recursion - funct that returns the length of a string
 * @s: the pointer to the first char of the input string
 * Return: the length of the input str
 */
int _strlen_recursion(char *s)
{
	int len = 0;
	/* bas encore de base case trouvé */
	/* recursion code */
	if (*s)
		len = 1 + _strlen_recursion(s + 1);
	/* s + 1 pour les appels de fonctions et jamais s++ ou ++s */
	/* il ne modifie pas s mais passe ensuite au char suivant */
	/* en gardant la valeur précédente de s */

	return (len);
}
