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
int print_i_d(va_list arg);
int print_number(int n);
int (*get_con(char c))(va_list);
int print_u(va_list arg);
int print_o(va_list arg);
int print_x(va_list arg);
int print_X(va_list arg);
int print_binary(unsigned int b);
int print_b(va_list arg);
int print_u_number(unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int rev_string(char *s);
int _strlen(char *s);
int print_r(va_list arg);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int print_R(va_list arg);
char *rot13(char *str);
int print_px(unsigned long int);
int print_ptr(va_list arg);
#endif /*main.h*/
