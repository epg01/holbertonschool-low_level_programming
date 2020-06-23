#include <stdio.h>

/*
 * Function declarations.
 */

signed int String_Character_Length(char *String_Character);

/**
 * rev_string - Function that reverses a string.
 * @String_Character: Variable that stores a character string
 */

void rev_string(char *String_Character)
{
	unsigned int Counter_Character;
	char *Pointer_The_End_Of_String;
	unsigned char Solve_Character_One_Time;

	Counter_Character = String_Character_Length(String_Character);
	Pointer_The_End_Of_String = String_Character;
	Pointer_The_End_Of_String += (Counter_Character - 1);

	for ( ; Pointer_The_End_Of_String >= String_Character;
	     Pointer_The_End_Of_String--, String_Character++)
	{
		Solve_Character_One_Time = *String_Character;
		*String_Character = *Pointer_The_End_Of_String;
		*Pointer_The_End_Of_String = Solve_Character_One_Time;
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
