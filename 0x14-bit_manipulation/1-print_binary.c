#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - function that draws a straight line in the terminal.
 * @n: The number to be checked
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
