#include "holberton.h"

/**
 *  print_last_digit - function that prints the last digit of a number.
 *  @NumberIntg: Variable type int.
 *  Return: Return the last digit of a number.
 */

int print_last_digit(int NumberIntg)
{
	NumberIntg = (NumberIntg < 0) ? (-1) * NumberIntg : NumberIntg;
	_putchar(NumberIntg % 10 + '0');
	return (NumberIntg % 10);
}
