#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
/**
*struct format - structure of string of format specifiers and pointers to print
*@f:format specifier
*@func:pointer to functions that will print according to the specifier 
*/
typdef struct format{
char s;
char f;
int (*func)(va_list args);
} fmt;
#endif /*main.h*/
