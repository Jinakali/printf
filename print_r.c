#include "main.h"
/**
 *rev_string- print reversed string
 *@s: string
 *Return:no of chars written
 */
int rev_string(char *s)
{
	int i, j, l;
	char temporary;

	l = _strlen(s);
	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		temporary = s[i];
		s[i] = s[j];
		s[j] = temporary;
	}
	_putstring(s);
	free(s);
	return (l);
}

/**
 *_strlen - print length of string
 *@s: string whose length must be found
 *
 *Return: string length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
/**
 * _strcpy - Copy the string pointed to by src to dest
 * @dest: Pointer to the buffer.
 * @src: Pointer to the string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
/**
 *print_r-converts arg to char * and prins in reverse
 *@arg:parameter to turn
 *Return:no of chars printed
 */
int print_r(va_list arg)
{
	char *s = va_arg(arg, char *), *s1;

	if (s == NULL)
	{
		return (_putstring("(null)"));
	}
	else
	{
		s1 = _strdup(s);
		return (rev_string(s1));
	}
}
