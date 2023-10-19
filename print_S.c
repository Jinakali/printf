#include "main.h"
/**
 *print_S-convert arg to char *
 *@arg: parameter to turn
 *Return: no of characters printed
 */
int print_S(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
		return (_putstring("(null)"));
	return (_putstring_non_print(s));

}
/**
 *_putstring_non_print- write strings to stdout
 *@s:string
 *Return:no of characters printed out
 *Non printable characters (0 < ASCII value < 32 or >= 127) are printed like
*\x, followed by the ASCII code value in hexadecimal (upper case - always 2 ch
 *-aracters)
 */
int _putstring_non_print(char *s)
{
	int i = 0, count = 0;

	for (; s[i] != '\0'; i++)
	{
		if ((s[i] < 32  && s[i] >= 0) || s[i] >= 127)
		{
			_putc('\\');
			_putc('x');
			print_X_S(s[i]);
			count += 4;
		}
		else
		{
			_putc(s[i]);
			count++;
		}
	}
	return (count);
}
/**
  *print_X_S- helps print_S to print non_letter char;
  *@c: character
  *Return: always 0
 */
int print_X_S(char c)
{
	unsigned int n, arr[2];
	int i;

	n = (unsigned int)c;
	arr[1] = 0;

	for (i = 0; i < 2; i++)
	{
		arr[i] = n % 16;
		n = n / 16;
	}
	for (i = 1; i >= 0; i--)
	{
		if (arr[i] >= 10 && arr[i] < 16)
			_putc(arr[i] - 10 + 'A');
		if (arr[i] <= 9)
			_putc(arr[i] + '0');
	}
	return (0);
}
