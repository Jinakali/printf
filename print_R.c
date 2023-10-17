#include "main.h"
/**
 *rot13 - encode alphabet with rot13
 *@str: string to encode
 *
 *Return: pointer to string
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alphabet[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
/**
  *print_R- convert arg to char * and printstring in rot13
  *@arg:parameter to turn to string
  *Return:no of char written
 */
int print_R(va_list arg)
{
	char *s = va_arg(arg, char *), *s1;
	int l = 0;

	if (s == NULL)
	{
		return (_putstring("(null)"));
	}
	else
	{
		s1 = _strdup(s);
		l = _putstring(rot13(s1));
		free(s1);
		return (l);
	}
}
