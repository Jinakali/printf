#include "main.h"
/**
 *print_number - print number
 *@n: number to print
 *Return: no of characters written to stdout
 */
int print_number(int n)
{
	unsigned int place_v, num, temp_n, no_c = 0;

	place_v = 1;

	if (n < 0)
	{
		_putc('-');
		no_c++;
		n = -1 * n;
	}

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
  *print_i_d-prints number
  *@arg: argument
  *Return: no of characters written to stdout
  */
int print_i_d(va_list arg)
{
	int i = va_arg(arg, int);

	return (print_number(i));
}
