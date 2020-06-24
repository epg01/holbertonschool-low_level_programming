#include "holberton.h"

signed int String_Character_Length(char *String_Character);

/**
 * puts2 - Function that prints every other character of a string,
 *         starting with the first character, followed by a new line
 * @String_Character: variable that stores a string of numbers.
 */

void puts2(char *String_Character)
{
	unsigned char SolveCharacter = 0;
	unsigned int Counter_Character = 0, Counter = 0;

	Counter_Character = String_Character_Length(String_Character);

	while (SolveCharacter != '\n' + 1)
	{
		if (Counter <=  Counter_Character)
			SolveCharacter = String_Character[Counter];
		else if ((Counter >=  Counter_Character) && (SolveCharacter != '\n'))
			SolveCharacter = '\n';
		else if (SolveCharacter == '\n')
			SolveCharacter++;

		if ((Counter <= Counter_Character) || (SolveCharacter == '\n'))
			_putchar(SolveCharacter);
		Counter += 2;
	}
}

/**
 * String_Character_Length - Function that returns the length of a string.
 * @String_Character: that stores the length to find.
 * Return: Return of the length.
 */

signed int String_Character_Length(char *String_Character)
{
	int Counter_Character = 0;

	while (*String_Character++)
		Counter_Character++;

	return (Counter_Character);
}
