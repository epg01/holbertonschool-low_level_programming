#include "holberton.h"
/**
 * _isdigit - writes numbers
 * @c: ww
 * Return: none.
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
