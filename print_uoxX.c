#include "main.h"
#include <stdio.h>

/**
 * print_u - prints an unsigned int
 * @arg: argument
 * Return: number of characters printed
 */

int print_u(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	char str[12];/*Assuming max 32-bit unsigned int*/

	snprintf(str, sizeof(str), "%u", n);
	return (_putstring(str));
}

/**
 * print_o - prints octal number
 * @arg: argument
 * Return: number ofcharacters
 */

int print_o(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	char str[12];/*Assuming max 32-bit unsigned int*/

	snprintf(str, sizeof(str), "%o", n);
	return (_putstring(str));
}

/**
 * print_x - prints hexadecimal number, lowercase
 * @arg: argument
 * Return: number of characters
 */

int print_x(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	char str[12];/*Assuming max 32-bit unsigned int*/

	snprintf(str, sizeof(str), "%x", n);
	return (_putstring(str));
}

/**
 * print_X - prints hexadecimal number, uppercase
 * @arg: argument
 * Return: number of characters
 */

int print_X(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	char str[12];/*Assuming max 32-bit unsigned int*/

	snprintf(str, sizeof(str), "%X", n);
	return (_putstring(str));
}
