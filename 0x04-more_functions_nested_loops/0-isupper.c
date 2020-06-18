#include "holberton.h"

/**
 * _isupper - function that checks for uppercase character.
 * @Character: variable that stores a character.
 * Return: 1 if c is uppercase returns 0 otherwise
 */

int _isupper(int Character)
{
	if (!(Character >= 'A' && Character <= 'Z'))
		return (0);
	else
		return (1);
}
