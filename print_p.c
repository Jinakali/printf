#include "main.h"
/**
  *print_ptr-The void * pointer argument is printed in hexadecimal
  *@arg:to convert to void * pointer
  *Return:no of chars printed out
  */
int print_ptr(va_list arg)
{
	void *ptr = va_arg(arg, void *);
	unsigned long int n;

	if (ptr == NULL)
	{
		return (_putstring("(nil)"));
	}
	n = (unsigned long int)ptr;
	_putc('0');
	_putc('x');
	return (print_px(n) + 2);

}
/**
 *print_px-print hexadecimal address
 *@n: any pointer variable
 *Return:no of chars printed out
 */
int print_px(unsigned long int n)
{
	long int *hex;
	long int i, j, count;
	unsigned long int n1 = n;

	if (n == 0)
		return (_putc('0'));
	count = 0;
	while (n > 0)
	{
		n = n / 16;
		count++;
	}

	hex = _calloc(count, sizeof(long int));
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
