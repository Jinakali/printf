#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
*struct format - structure of string of format specifiers and pointers to print
*@f:format specifier
*@func:pointer to functions that will print according to the specifier
*/
typedef struct format
{
	char f;
	int (*func)(va_list args);
} fmt;
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list arg);
int print_s(va_list arg);
int print_p(va_list arg);
int _putstring(char *s);
#endif /*main.h*/
