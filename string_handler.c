#include <stdio.h>
#include "main.h"

/**
 * string_handler - handles string printing
 * @str: string to print
 *
 * Return: lenght of string argument
 */

int string_handler(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
