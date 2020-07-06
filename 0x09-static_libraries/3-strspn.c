#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char array
 * @accept: pointer to char array
 * Return: none
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, f;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		f = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k++;
				f = 1;
				break;
			}
			j++;
		}
		if (f == 0)
			break;
		i++;
	}
	return (k);
}
