#include "holberton.h"
#include <stdlib.h>
/**
 * print_c - prints chars
 * @arguments: chart to print
 * Return: number of character printed
 */
int print_c(va_list arguments)
{
	char str = va_arg(arguments, char*);
		if (str == 00)
		{
			return (0);
		}
			write(1, &str, 1);

return (1);
}

/**
 * print_s - prints strings
 * @arguments: va list
 * Return: number of character printed
 */
int print_s(va_list arguments)
{
	int i = 0;
	char *str = va_arg(arguments, char*);

		if (str == 00)
		{
			return (0);
		}

		while (str[i])
		{
			write(1, (str + i), 1);
			i++;
		}
return (i);
}
