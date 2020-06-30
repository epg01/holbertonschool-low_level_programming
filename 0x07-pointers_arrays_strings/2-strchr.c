#include "holberton.h"
#include <stdlib.h>

/**
 * _strchr - Function that locates a character in a string.
 * @Character: Pattern to be searched in the array.
 * @ArrayCharacter: Stores the character array.
 * Return: Returns a pointer to the first occurrence of the character c in the
 *         string s, or NULL if the character is not found
 */

char *_strchr(char *ArrayCharacter, char Character)
{
	while (*ArrayCharacter && *ArrayCharacter++ != Character)
		;
	return ((*--ArrayCharacter == Character) ? ArrayCharacter : NULL);
}
