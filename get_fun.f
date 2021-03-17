#include "holberton.h"
/**
 * get_fun - print according to a specified format
 * @d: chart to print
 * Return: number of character printed
 */

int get_fun(const char *format, va_list arguments)
{
	_print print_any[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_i},
		{"i", print_i},
		{00, 00}
	};
	
	unsigned int i = 0;
	unsigned int count = 0;

	while (print_any[i].dt)
	{
		if (*print_any[i].dt == format[0])
		{
			count += print_any[i].f(arguments);
			i++;
		}
	}
	return (count);
}
