#include "holberton.h"

/**
 * str_concat - Function that concatenates two strings.
 * @String1: Character string.
 * @String2: Character string.
 * Return: If  NULL is passed, treat it as an empty string
 *         The function should return NULL on failure.
 */

char *str_concat(char *String1, char *String2)
{
	void Concatenate(char *, char *, char *);
	unsigned int StrlenM(char *, char *);
	char *String_Total;
	unsigned int Length_String;

	Length_String = StrlenM(String1, String2);
	String_Total = (char *)malloc(Length_String * sizeof(char));

	if (String_Total)
	{
		Concatenate(String_Total, String1, String2);
		return (String_Total);
	}
	else
	{
		free(String_Total);
		return (NULL);
	}

}

/**
 * Concatenate - Concatenates the strings String1 and String2 to the memory
 *               set pointed to by the pointer.
 * @String_Total: Memory where the concatenation is saved.
 * @String1: Pointer To String Character.
 * @String2: Pointer To String Character.
 */

void Concatenate(char *String_Total, char *String1, char *String2)
{
	char State = 1;

	while (State)
		if (String1 && (*String1))
			*String_Total++ = *String1++;
		else if (String2 && (*String2))
			*String_Total++ = *String2++;
		else
			State--;
}

/**
 * StrlenM - Function that counts characters, and if the two pointers are
 *          NULL their quantity is 1, requirements for the holberton exercise.
 * @String1: Pointer to string character.
 * @String2: Pointer to String character.
 * Return: Returns the length of the visible characters plus the null.
 *         If both are null returns 1, demands for the exercise.
 */

unsigned int StrlenM(char *String1, char *String2)
{
	unsigned char State;
	unsigned int Counter = 1;

	State = 1;

	while (State)
		if (String1 && (*String1))
			Counter++, String1++;
		else if (String2 && (*String2))
			Counter++, String2++;
		else
			State--;

	return (Counter);
}
