#include "main.h"

/**
 * _printf - function that prints formatted output to standard output
 *
 * @format: input string to be formatted
 *
 * Return: count or number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int count = 0, struct_index = 0, ret_value = 0, i = 0, n;
	s_print specs[] = {{"c", print_char}, {"s", handle_string}, {NULL, NULL}};

	va_start(arguments, format);
	if (format == NULL || !format[0])
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (struct_index < 2)
			{
				if (format[i + 1] == *specs[struct_index].arg_type)
				{
					ret_value = specs[struct_index].f(arguments);
					count += ret_value;
				}
				struct_index++;
			}
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				n = va_arg(arguments, int);
				count += handle_number(n);
			}
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			i = i + 2, struct_index = 0;
		}
		else
		{
			_putchar(format[i]);
			i++, count++;
		}
	}
	va_end(arguments);
	return (count);
}
