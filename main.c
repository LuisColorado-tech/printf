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

	_printf("primera prueba:[%s]", t);
	printf("\n");
	_printf("primera prueba:[%c]", c);
	printf("\n");
	_printf("primera prueba:[%%]");
	printf("\n");
	return (0);
}
