#include "holberton.h"
/**
 * *_strcpy - writes nudscfdsmbers
 * @src: pointer
 * @dest: pointer
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (1)
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
			break;
		i++;
	}
	return (dest);
}
