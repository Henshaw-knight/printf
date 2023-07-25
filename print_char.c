#include "main.h"

/**
 * print_char - Function that prints a character
 *
 * @c: the character to print
 * Return: Always 1 (Success)
 */
int print_char(va_list c)
{
	char ch = va_arg(c, int);

	_putchar(ch);

	return (1);
}
