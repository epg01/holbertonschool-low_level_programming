#include "holberton.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @Number: Quantity that must be positive (includes zero) in order for the
 *          function to perform the task.
 */

void print_diagonal(int Number)
{
	unsigned char SolveCharacter = 0, State0 = 0;
	unsigned char Counter_Space = 0, Counter_Character_Diagonal = 1;

	while (SolveCharacter != '\n' + 1)
	{
		if (Number <= 0)
			SolveCharacter = '\n', State0 = 1;
		else if ((Counter_Character_Diagonal == 1) && !(Counter_Space))
			SolveCharacter = '\\', Counter_Space++;
		else if (Counter_Space < Counter_Character_Diagonal)
			SolveCharacter = ' ', Counter_Space++;
		else if (((Counter_Space == Counter_Character_Diagonal) &&
			  !(SolveCharacter == '\\')))
			SolveCharacter = '\\';
		else if (SolveCharacter == '\\')
		{
			Counter_Character_Diagonal++, Counter_Space = 1;
			SolveCharacter = '\n';
		}

		_putchar(SolveCharacter);
		if (Number <= 0)
			break;
		else if ((Counter_Character_Diagonal == Number + 1) ||
			(State0 == 1))
			SolveCharacter = '\n' + 1;
	}
}
