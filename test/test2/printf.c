#include "main.h"
/**
 *_printf-produces output according to a format
 *@format:character string
 *Return:number of characters printed except null byte
 */
int _printf(const char *format, ...)
{
	int i, j, no_chars = 0;
	va_list par;
	fmt conversion[] = {
		{'u', print_u},
		{'o', print_o},
		{'x', print_x},
		{'X', print_X},
		{'\0', NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0')
|| format[0] == '\0')
		return (-1);
	va_start(par, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			no_chars += write(2, &format[i], 1);
			continue;/*skip to the next character*/
		}
		if (format[i + 1] == '\0')
			return (-1);
		while (format[i] == '%')
		{
			for (j = 0; conversion[j].f != '\0'; j++)
			{
				if (conversion[j].f == format[i + 1])
				{
					no_chars += conversion[j].func(par);
					i = i + 1;/*skip format apecifier*/
					break;
				}
			}
		}
	}
	va_end(par);
	return (no_chars);
}
