#include <stdio.h>
#include "holberton.h"

/**
 * main - Program that prints its name, followed by a new line.
 * @argc: Counter.
 * @argv: Doble pointer.
 * Return: Return -1 c argc does not exist, return 0 (successful exit).
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		char SolveCharacter = 0, State = 1;

		while (State)
		{
			if (**argv)
				SolveCharacter = *(argv[0])++;
			else if (!(**argv) && SolveCharacter != '\n')
				SolveCharacter = '\n';
			else if (SolveCharacter == '\n')
				State = 0;
			if (State)
				_putchar(SolveCharacter);
		}
		return (0);
	}
	else
		return (-1);
}
