#include "main.h"

/**
 * _putchar - prints out a character
 * @c: character to be printed out
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_char - prints out char
 * @args: arguments to be printed
 *
 * Return: number of characters
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str - prints out a string
 * @args: arguments to be printed out
 *
 * Return: number of characters
 */

int print_str(va_list args)
{
	int i;
	char *str = va_arg(args, char *);

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

/**
 * print_percent - prints out %
 * @args: arguments to be printed out
 *
 * Return: 1 on success
 */

int print_percent(va_list args)
{
	(void) args;
	_putchar('%');
	return (1);
}
