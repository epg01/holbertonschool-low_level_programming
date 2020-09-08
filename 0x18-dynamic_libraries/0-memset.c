#include "holberton.h"
/**
 * *_memset - fills memory spaces
 * @s: char pointer
 * @b: char
 * @n: unsigned int
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
