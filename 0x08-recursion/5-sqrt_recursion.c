#include "holberton.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @Number: Number to be done the process of removing the square root.
 * Return: If n does not have a natural square root, the function
 *         should return -1.
 */

int _sqrt_recursion(int Number)
{
	int Found_Sqrt(int, int);

	return (Found_Sqrt(1, Number));
}

/**
 * Found_Sqrt - Will do the process of finding the number that multiplied
 *              twice by itself of what the carialbe Number contains
 *              but returns -1
 * @FoundNumber: Number that is multiplied twice.
 * @Number: Number to find the square root.
 * Return: If n does not have a natural square root, the function
 *         should return -1.
 */

int Found_Sqrt(int FoundNumber, int Number)
{
	if (FoundNumber <= Number)
		if ((FoundNumber * FoundNumber) == Number)
			return (FoundNumber);
		else
			return (Found_Sqrt(FoundNumber + 1, Number));
	else
		return (-1);
}
