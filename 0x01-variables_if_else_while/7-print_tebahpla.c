#include <stdio.h>

/**
 * main - Print the alphabet inversely with a new line.
 *
 * Return: exit successful.
 */

int main(void)
{
	unsigned char LowerCase;

	for (LowerCase = 'z'; LowerCase != ('\n' - 1); LowerCase--)
	{
		if (LowerCase == ('a' - 1))
			LowerCase = '\n';
		putchar(LowerCase);
	}
	return (0);
}
