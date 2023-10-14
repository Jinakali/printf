#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *print_c- print 1 char to stdout
 *@arg:arg to be printed
 *Return: no of char printed out
 */
int print_c(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}
/**
  *print_s- print string
  *@arg:arg to be printed
*Return: no of characters sent to stdout
  */
/**int print_s(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		return (0);
	}
 	
}*/
