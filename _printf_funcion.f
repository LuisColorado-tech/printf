#include "holberton.h"
#include <stdlib.h>


/**
 * _printf - ARGUMENT(s) according to FORMAT, or execute according to OPTION
 * @format: entry format defined by user
 * Return: amount of printed characters
 */

int _printf(const char *format, ...)
{
	va_list arguments;
	unsigned int x = 0;
	unsigned int count = 0;

	va_start(arguments, format);
	while (format && format[x])
	{
		if (format[x] != '%')
		{
			write(1, (format + x), 1);
			count++;
		}
		if (format[x] == '%' && format[x + 1] == '%')
		{
			write(1, (format + x), 1);
			count++;
		}
		count = get_fun(format[x + 1]),(arguments);
		x++;
		}
		x++;
	}
	va_end(arguments);
	return (count);
}
