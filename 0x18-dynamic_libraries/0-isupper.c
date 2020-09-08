#include "holberton.h"
/**
 * _isupper - writes alphabet
 * @c: eqde
 * Return: int.
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
