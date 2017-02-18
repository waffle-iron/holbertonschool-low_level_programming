#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98  - print numbers n to 98
 * @n: integer
 *
 * Return: print to stdout numbers n to 98 followed by a newline.
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n==98)
	{
		printf("%d\n", n);
       	}
}
