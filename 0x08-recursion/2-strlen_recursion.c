#include "holberton.h"

/**
 * _strlen_recursion - unction that returns the length of a string.
 * @ArrayCharacter: Character string with which we find the length of this
 *                  string.
 * Return: return length of the  character string.
 */

int _strlen_recursion(char *ArrayCharacter)
{
	int Counter = 0;

	if (*ArrayCharacter)
		Counter = _strlen_recursion(ArrayCharacter + 1), Counter++;
	return (Counter);
}
