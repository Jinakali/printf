#include "main.h"
/**
  *print_binary-print_binary
  *@b:unsigned int to convert to binary
  *Return: no of bits
  */
int print_binary(unsigned int b)
{
	int i, j, binary[sizeof(unsigned int) * 8];

	if (b == 0)
		return (_putc('0'));
	for (i = 0; b > 0; i++)
	{
		binary[i] = b % 2;
		b = b / 2;
	}
	for (j = i - 1; j >= 0; j--)
		_putc('0' + binary[j]);
	return (i);
}
/**
  *print_b- converts arg to binary and prints it binary rep
  *@arg:parameter
  *Return:no of bits
  */
int print_b(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);

	return (print_binary(n));
}
