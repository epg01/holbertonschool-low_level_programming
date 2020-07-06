#include "holberton.h"

#define NULL 0

/**
 * *_strchr - Function that locates a character in a string.
 * @ArrayCharacter: Pointer to an array of characters.
 * @Character: Pattern data to look for in the variable Array Character.
 * Return: Returns a pointer to the first occurrence of the character
 *         c in the string s, or NULL if the character is not found
 */

char *_strchr(char *ArrayCharacter, char Character)
{
	while (*ArrayCharacter)
		if (*ArrayCharacter != Character)
			ArrayCharacter++;
		else if (*ArrayCharacter == Character)
			break;
	return ((*ArrayCharacter || !(Character)) ? ArrayCharacter : NULL);
}
