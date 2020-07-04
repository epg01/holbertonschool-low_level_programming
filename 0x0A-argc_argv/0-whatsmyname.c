#include <stdio.h>
#include "holberton.h"
/**
 *
 *
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
