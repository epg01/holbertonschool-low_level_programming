#include <stdio.h>
#include "holberton.h"

/**
 * main - Program that prints all arguments it receives.
 * @argc: Counter.
 * @argv: Doble pointer.
 * Return: Returns -1 if argc does not exist and 0 output satisfactory.
 */

int main(int argc, char *argv[])
{
	void MetodoConMacros(char *argv);

	if (argc)
	{
		while (*argv)
			MetodoConMacros(*argv++);
		return (0);
	}
	else
		return (-1);
}

#define FUERAPALABRA(y) (((y) == (' ')) || ((y) == ('\t')) || ((y) == ('\n')))
#define VALORPORDEFECTO  '\0'

/**
 * MetodoConMacros - Print words with line break, using macros.
 * @argv: Pointer to a character string (one word).
 */

void MetodoConMacros(char *argv)
{
	char temp;

	temp = VALORPORDEFECTO;

	while (*argv)
	{
		if ((temp != ' ') && (temp != '\t') && (temp != '\n')
		    && (temp != '\0') && FUERAPALABRA(*argv))
			;
		else if ((*argv != ' ') && (*argv != '\t') && (*argv != '\n')
					       && (*argv != '\0'))
			_putchar(*argv);
		temp = *argv++;
	}
	_putchar('\n');
}
