#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *t = "exitosa";
	char c = 'g';
	int a;
	int b = 27374;
	int d = -12232;

	a = _printf("%s\n", t);

	a = printf("%s\n", t);
	
	a = _printf("%i\n", b);
	
	a = _printf("%d\n", d);

	
	return (0);
}
