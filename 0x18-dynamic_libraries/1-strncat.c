#include "holberton.h"
/**
 * *_strncat - writes nudscfdsmbers
 * @dest: pointer
 * @src: pointer
 * @n: pointer
 * Return: none
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	i = 0;
	while (1)
	{
		if (dest[i] == '\0')
			break;
		i += 1;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
