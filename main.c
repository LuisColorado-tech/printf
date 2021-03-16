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

	a = _printf("primera prueba:\n");
	printf("%d\n", a);
	a = printf("primera prueba:\n");
	printf("%d\n", a);

	
	return (0);
}
