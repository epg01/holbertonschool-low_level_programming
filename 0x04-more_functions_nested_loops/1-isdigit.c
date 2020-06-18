#include "holberton.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @Character: variable that stores a character.
 * Return: returns 1 if c is a digit returns 0 otherwise
 */

int _isdigit(int Character)
{
	if (!(Character >= '0' && Character <= '9'))
		return (0);
	else
		return (1);
}
