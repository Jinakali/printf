#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
 	len = _printf("Character:[%c]\n", 'H');
  	len2 = printf("Character:[%c]\n", 'H');
	printf("Len:[%d]\n", len);
    	printf("Len:[%d]\n", len2);
	return (0);
}
