#include "holberton.h"
/**
 * *_strcat - writes nudscfdsmbers
 * @dest: pointer
 * @src: pointer
 * Return: none
 */
char *_strcat(char *dest, char *src)
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
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
