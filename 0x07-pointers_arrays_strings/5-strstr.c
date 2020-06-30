#include "holberton.h"

#define NULL 0

/**
 * _strstr - function that locates a substring.
 * @haystack: function that locates a substring.
 * @needle: Contains the array of characters (pattern).
 * Return: Returns a pointer to the beginning of the located substring, or
 *         NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	signed int Counter = 0;
	char *temp = needle;

	if (*haystack && *needle)
	{
		while (*haystack)
			if (!(*needle))
				break;
			else if (*needle != *haystack)
				needle = temp, haystack++;
			else if (*needle++ == *haystack++)
				Counter--;
		return (!(*needle) ? haystack + Counter : NULL);
	}
	else
		return (NULL);
}
