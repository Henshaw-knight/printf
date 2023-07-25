#include <stdio.h>
#include "main.h"

/**
 * handle_string - handles string printing
 * @str: string to print
 *
 * Return: lenght of string argument
 */

int handle_string(char *str)
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
