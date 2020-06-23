#include "holberton.h"

/*
 * Function declarations.
 */

signed int String_Character_Length(char *String_Character);

/**
 * print_rev - Function that prints a string, in reverse,
 *             followed by a new line.
 * @String_Character: Variable that stores a character string.
 */

void print_rev(char *String_Character)
{
	signed int Counter_Character;
	unsigned char SolveCharacter;

	Counter_Character = String_Character_Length(String_Character);
	String_Character += (Counter_Character - 1);

	while (Counter_Character-- >= 0)
	{
		if (Counter_Character >= 0)
			SolveCharacter = *String_Character--;
		else
			SolveCharacter = '\n';
		_putchar(SolveCharacter);
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
