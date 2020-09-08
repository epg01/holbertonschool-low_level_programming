#include "holberton.h"
/**
 * _puts - wricdwcwc
 * @str: pointer
 * Return: none
 */
void _puts(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c += 1;
	}
	_putchar('\n');
}
