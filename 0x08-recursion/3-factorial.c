#include "holberton.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @Number: Data to which the factorial will be made.
 * Return: If n is lower than 0, the function should return -1 to indicate an
 *         error Factorial of 0 is 1.
 */

int factorial(int Number)
{
	if (Number < 0)
		return (-1);
	else if (Number > 1)
		Number = Number * factorial(Number - 1);
	return (Number);
}
