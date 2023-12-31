#include <limits.h>
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

	n = (unsigned int)n;
	if (n < 0)
	{
		_putchar('-');
		count++;
		if (n == INT_MIN)
		{
			_putchar('2');
			count++;
			n = 147486348;
		}
		else
		{
			n *= -1;
		}
	}
	if (n >= 10)
	{
		count += handle_number(n / 10);
		count += handle_number(n % 10);
	}
	if (n < 10)
	{
		if ((n + '0') == -1)
			return (-1);
		_putchar(n + '0');
		count++;
	}

	return (count);
}
