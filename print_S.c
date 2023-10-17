#include "main.h"
/**
 *
 */
int print_S(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		return (_putstring("(null)"));

}
/**
 *_putstring_non_print- write strings to stdout
 *@s:string
 *Return:no of characters printed out
 *Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way:
 *\x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
 */
int _putstring_non_print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			print_X_S(s[i]);
			i = i + 4;
		}
		else
		{
			_putchar(s[i]);
			i++;
		}
	}
	return (i);
}
/**
*/
int print_X_S(char c)
{
	unsigned int n = c;
}
