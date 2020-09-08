#include "holberton.h"
/**
 * _strcmp - writes nudscfdsmbers
 * @s2: pointer
 * @s1: pointer
 * Return: none
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	i = 0;
	n = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (n);
}
