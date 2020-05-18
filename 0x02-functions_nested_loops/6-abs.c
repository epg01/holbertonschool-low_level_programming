#include "holberton.h"

/**
 *  _abs - function that computes the absolute value of an integer.
 * @Number: Variable type int
 * Return: Return at Number.
 */

int _abs(int Number)
{
        Number = (Number < 0) ? (-1) * Number : Number;

	return (Number);
}
