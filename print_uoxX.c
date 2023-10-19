#include "main.h"
/**
 *print_u_number - print unsigned  number
 *@n: number to print
 *Return: no of characters written to stdout
 */
int print_u_number(unsigned int n)
{
	unsigned int place_v, num, temp_n, no_c = 0;

	place_v = 1;

	temp_n = n;

	while (temp_n >= 10)
	{
		place_v = place_v * 10;
		temp_n = temp_n / 10;
	}
	while (place_v > 0)
	{
		num = n / place_v;
		_putc('0' + num);
		no_c++;
		n = n % place_v;
		place_v = place_v / 10;
	}
	return (no_c);
}
/**
 * print_u - prints an unsigned int
 * @arg: argument
 * Return: number of characters printed
 */

int print_u(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	return (print_u_number(n));
}

/**
 * print_o - prints octal number
 * @arg: argument
 * Return: number ofcharacters
 */

int print_o(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int), *octal, n1 = n;
	int i, j, count;

	if (n == 0)
		return (_putc('0'));
	count = 0;
	while (n > 0)
	{
		n = n / 8;
		count++;
	}
	octal = _calloc(count, sizeof(unsigned int));
	if (octal == NULL)
		return (-1);

	for (i = 0; i < count; i++)
	{
		octal[i] = n1 % 8;
		n1 = n1 / 8;
	}
	for (j = count - 1; j >= 0; j--)
		_putc('0' + octal[j]);
	free(octal);
	return (count);

}

/**
 * print_x - prints hexadecimal number, lowercase
 * @arg: argument
 * Return: number of characters
 */

int print_x(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int), *hex, n1 = n;
	int i, j, count;

	if (n == 0)
		return (_putc('0'));
	count = 0;
	while (n / 16 != 0)
	{
		n = n / 16;
		count++;
	}
	count = count + 1;

	hex = _calloc(count, sizeof(unsigned int));
	if (hex == NULL)
		return (-1);

	for (i = 0; i < count; i++)
	{
		hex[i] = n1 % 16;
		n1 = n1 / 16;
	}
	for (j = count - 1; j >= 0; j--)
	{
		if (hex[j] >= 10 && hex[j] < 16)
			_putc(hex[j] - 10 + 'a');
		if (hex[j] <= 9)
			_putc(hex[j] + '0');
	}
	free(hex);
	return (count);
}

/**
 * print_X - prints hexadecimal number, uppercase
 * @arg: argument
 * Return: number of characters
 */

int print_X(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int), *hex, n1 = n;
	int i, j, count;

	if (n == 0)
		return (_putc('0'));
	count = 0;
	while (n / 16 != 0)
	{
		n = n / 16;
		count++;
	}
	count = count + 1;

	hex = _calloc(count, sizeof(unsigned int));
	if (hex == NULL)
		return (-1);

	for (i = 0; i < count; i++)
	{
		hex[i] = n1 % 16;
		n1 = n1 / 16;
	}
	for (j = count - 1; j >= 0; j--)
	{
		if (hex[j] >= 10 && hex[j] < 16)
			_putc(hex[j] - 10 + 'A');
		if (hex[j] <= 9)
			_putc(hex[j] + '0');
	}
	free(hex);
	return (count);
}
