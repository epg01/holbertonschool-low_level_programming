#include "holberton.h"

/**
 * _pow_recursion - Function that returns the value of x raised to
 *                  the power of y.
 * @Power: Number to be multiplied Power times.
 * @Base: Number of times Base will be multiplied.
 * Return: If y is lower than 0, the function should return -1.
 */

int _pow_recursion(int Base, int Power)
{
	if (Power > 1)
		Base = Base * _pow_recursion(Base, --Power);
	else if (Power < 0)
		return (-1);
	else if (!Power)
		Base = 1;
	return (Base);
}
