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
typedef struct format{
char f;
int (*func)(va_list args);
}fmt;
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int print_percent(va_list args);
int _putchar(char );
#endif /*main.h*/
