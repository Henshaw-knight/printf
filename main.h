#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct spec_printer - Struct for formatting specifiers with the use
 * of functions
 *
 * @arg_type: identifier/specifier
 * @f: pointer to function that aids printing
 */
typedef struct spec_printer
{
	char *arg_type;
	int (*f)(va_list);
} s_print;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_string(va_list str_arg);
int handle_number(int n);
int print_char(va_list c);

#endif /* MAIN_H */
