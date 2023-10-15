#include "main.h"
/**
 *_printf-produces output according to a format
 *@format:character string
 *Return:number of characters printed except null byte
 */
int _printf(const char *format, ...)
{
	int i, j, char_no = 0;
	va_list par;

	fmt conversion[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_p},
		{'i', print_i_d},
		{'d', print_i_d},
		{'\0', NULL}
	};
	va_start(par, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		while (format[i] == '%')
		{
			for (j = 0; conversion[j].f != '\0'; j++)
			{
				if (conversion[j].f == format[i + 1])
				{
					char_no += conversion[j].func(par);
					i = i + 2;/*skip format apecifier*/
					break;
				}
			}
		}
		char_no += write(2, &format[i], 1);
	}
	va_end(par);
	return (char_no);
}
