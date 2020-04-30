#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0, followed
 *        by a new line.
 *
 * Return: exit successful.
 */

int main(void)
{
	unsigned char NumberDecimal;

	for (NumberDecimal = '0'; NumberDecimal != ('\n' + 1); NumberDecimal++)
	{
		if (NumberDecimal == ('9' + 1))
			NumberDecimal = '\n';
		putchar(NumberDecimal);
	}
	return (0);
}
