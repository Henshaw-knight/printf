#include "main.h"
#include <stdio.h>

/**
 * handle_number - handle number printing
 * @n: number to print
 *
 * Return: int length of integer
 */

int handle_number(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n *= -1;
	}
	if (n >= 10)
	{
		count += handle_number(n / 10);
		count += handle_number(n % 10);
	}
	if (n < 10)
	{
		_putchar(n + '0');
		count++;
	}

	return (count);
}
