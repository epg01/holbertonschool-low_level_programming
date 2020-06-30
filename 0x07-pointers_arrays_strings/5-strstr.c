#include "holberton.h"

#define NULL 0

/**
 *
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
	signed int Counter = 0;
	char *temp = needle;

	while (*haystack)
		if (!(*needle))
			break;
		else if (*needle != *haystack)
			needle = temp, haystack++;
		else if (*needle++ == *haystack++)
			Counter--;
	return (!(*needle) ? haystack + Counter : NULL);
}
