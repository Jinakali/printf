#include "main.h"
/**
 *get_con-find function that converts argument to right type
 *@c: format specifier character
 *Return:appropriate function for conversion
 */
int (*get_con(char c))(va_list)
{
	fmt conversion[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
		{'i', print_i_d},
		{'d', print_i_d},
		{'u', print_u},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'b', print_b},
		{'\0', NULL}
	};
	int j;

	for (j = 0; conversion[j].f != '\0'; j++)
	{
		if (conversion[j].f == c)
		{
			return (conversion[j].func);
		}
	}
	return (NULL);

}
/**
 *_printf-produces output according to a format
 *@format:character string
 *Return:number of characters printed except null byte
 */
int _printf(const char *format, ...)
{
	int i, no_chars_writ = 0;
	va_list par;

	va_start(par, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			no_chars_writ += write(2, &format[i], 1);
		}
		while (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			if (get_con(format[i]) != NULL)
			{
				no_chars_writ += get_con(format[i])(par);
				break;
			}
			if (get_con(format[i]) == NULL)
			{
				no_chars_writ += _putchar('%');
				no_chars_writ += _putchar(format[i]);
			}
		}
	}
	va_end(par);
	return (no_chars_writ);
}
