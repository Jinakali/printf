#include "main.h"
/**
 * _strdup -copy of the string given as a parameter .
 *@str: string
 * Return: duplicated string or NULL;
 */
char *_strdup(char *str)
{
	int i;
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * _strlen(str) + 1);

	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
