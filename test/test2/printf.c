#include "main.h"

/**
 * _printf - prints output according to a format
 * @format: format string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	int i;

	fmt specs[] = 
	{
		{'c', print_char},
		{'s', print_str},
		{'%', print_percent},
		{'\0', NULL}
	};

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; specs[i].f != '\0'; i++)
			{
				if (*format == specs[i].f)
				{
					count += specs[i].func(args);
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	
	va_end(args);
	return count;
}
