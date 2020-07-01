#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 * @ArrayCharacter: Character string to be printed.
 */

void _puts_recursion(char *ArrayCharacter)
{
	char SolveCharacter;

	if (*ArrayCharacter)
		SolveCharacter = *ArrayCharacter;
	else
		SolveCharacter = '\n';
	_putchar(SolveCharacter);

	if (*ArrayCharacter)
		_puts_recursion(ArrayCharacter + 1);
}
