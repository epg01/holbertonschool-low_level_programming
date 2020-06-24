#include "holberton.h"

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

/**
 * rev_string - Function that reverses a string.
 * @String_Character: Variable that stores a character string.
 */

void rev_string(char *String_Character)
{
	if (*String_Character)
	{
		unsigned char State0, State1;
		char *Pointer_To_The_Penultimate_Character;
		unsigned int Counter_String_Character = 0;

		Pointer_To_The_Penultimate_Character = String_Character;
		State0 = State1 = 1;

		while (State0)
		{
			if (State1 == 1)
			{
				Counter_String_Character = String_Character_Length(String_Character);
				State1 += 1;
			}
			else if (State1 == 2)
			{
				Pointer_To_The_Penultimate_Character += (Counter_String_Character - 1);
				State1 = 0;
			}
			else if (String_Character < Pointer_To_The_Penultimate_Character)
			{
				int temp = *String_Character;
				*String_Character = *Pointer_To_The_Penultimate_Character;
				*Pointer_To_The_Penultimate_Character = temp;
				Pointer_To_The_Penultimate_Character--;
				String_Character++;
			}
			else
				State0 = 0;
		}
	}
	else
		return;
}
