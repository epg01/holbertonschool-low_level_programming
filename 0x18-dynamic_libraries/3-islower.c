#include "holberton.h"
/**
 * _islower - find capital letters or not capi
 * @c: char
 * Return: 1 or 0
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
