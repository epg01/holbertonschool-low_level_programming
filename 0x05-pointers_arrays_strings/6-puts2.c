#include "holberton.h"

/*
 * Function declarations.
 */

unsigned int String_Character_Length(char *String_Character);

/**
 * puts2 - Function that prints every other character of a string,
 *         starting with the first character, followed by a new line
 * @String_Character: variable that stores a string of numbers.
 */

void puts2(char *String_Character)
{
	if (*String_Character)
	{
		unsigned char State0, State1;
		unsigned int Counter_String_Character = 0;
		unsigned int Counter = 0;

		State0 = State1 = 1;

		while (State0)
		{
			if (State1 == 1)
			{
				Counter_String_Character = String_Character_Length(String_Character);
				State1 = 0;
			}
			else if (Counter <= Counter_String_Character)
			{
				_putchar(*String_Character);
				String_Character += 2;
				Counter += 2;
			}
			else
				_putchar('\n'), State1 = 3;

			if (State1 == 3)
				State0 = 0;
		}
	}
	else
	{
		_putchar('\n');
		return;
	}
}

/**
 * String_Character_Length - Function that returns the length of a string.
 * @String_Character: that stores the length to find.
 * Return: Return of the length.
 */

unsigned int String_Character_Length(char *String_Character)
{
	int Counter_Character = 0;

	while (*String_Character++)
		Counter_Character++;

	return (Counter_Character);
}
