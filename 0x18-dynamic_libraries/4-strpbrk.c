#include "holberton.h"
/**
 * *_strpbrk - return a string in a match
 * @s: pointer
 * @accept: pointer
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (p);
}
