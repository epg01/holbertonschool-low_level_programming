#include "holberton.h"
/**
 * *_strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to string
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, f;
	char *p = 0;

	i = 0;
	j = 0;
	f = 0;
	if (needle[0] == '\0')
	{
		p = &haystack[0];
		return (p);
	}
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			while (needle[j] != '\0')
			{
				if (needle[j] != haystack[k])
				{
					f = 1;
					break;
				}
				k++;
				j++;
			}
			if (f != 1)
			{
				p = &haystack[i];
				break;
			}
			k = 0;
			f = 0;
			j = 0;
		}
		i++;
	}
	return (p);
}
