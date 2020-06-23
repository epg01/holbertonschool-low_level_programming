#include "holberton.h"

/**
 * puts2 - Function that prints every other character of a string,
 *         starting with the first character, followed by a new line
 * @String_Number: variable that stores a string of numbers.
 */

void puts2(char *String_Number)
{
	char SolveCharacter = -1;

	while (!(SolveCharacter == '\n' + 1))
	{
		if (!(*String_Number != '0'))
			SolveCharacter = '0';
		else if ((*String_Number) && (!((*String_Number - '0') % 2)))
			SolveCharacter = *String_Number;
		else if (!(*String_Number) && (SolveCharacter != '\n'))
			SolveCharacter = '\n';
		else if (!(SolveCharacter != '\n'))
			SolveCharacter++;
		else
			SolveCharacter = -1;
		if ((SolveCharacter >= '0' && SolveCharacter <= '9') ||
		    SolveCharacter == '\n')
			_putchar(SolveCharacter);
		String_Number++;
	}
}
