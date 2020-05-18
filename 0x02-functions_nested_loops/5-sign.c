#include "holberton.h"

/**
 *  print_sign - function that prints the sign of a number.
 *  @n: variable type int.
 *  Return: returns 1 and prints + if n is greater than zero.
 *          returns 0 and prints 0 if n is zero.
 *          returns -1 and prints - if n is less than zero.
 */

int print_sign(int n)
{
	unsigned char Sing;

	if (n > 0)
	{
		Sing = '+';
		n = 1;
	}
	else if (n < 0)
	{
		Sing = '-';
		n = -1;
	}
	else
	{
		Sing = '0';
		n = 0;
	}

	_putchar(Sing);
	return (n);
}
