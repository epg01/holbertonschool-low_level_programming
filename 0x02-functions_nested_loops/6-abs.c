#include "holberton.h"

/**
 *  _abs - function that computes the absolute value of an integer.
 * @Number: Variable type int
 * Return: Return at Number.
 */

int _abs(int Number)
{
	int SolveNumber;

	SolveNumber = (Number < 0) ? (-1) * Number : Number;
	do
		_putchar(Number / 10);
	while (Number /= 10);

	return (SolveNumber);
}
