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
	int count = 0, struct_index = 0, ret_value = 0;
	s_print specs[] = {
		{"c", print_char},
		{"s", handle_str},
		{NULL, NULL}
	};

	va_start(arguments, format);

	if (format == NULL || !format[0])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			while (struct_index < 2)
			{
				if (*format == *specs[struct_index].arg_type)
				{
					ret_value = specs[struct_index].f(arguments);
					if (ret_value == -1)
						return (-1);
					count += ret_value;
				}
				struct_index++;
			}
		}
	}
}
