#include <stdio.h>
#include "main.h"

/**
 * handle_string - handles string printing
 * @str_arg: string argument from which string is printed
 *
 * Return: length of string argument
 */

int handle_string(va_list str_arg)
{
	int i = 0;
	char *str = va_arg(str_arg, char *);

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
