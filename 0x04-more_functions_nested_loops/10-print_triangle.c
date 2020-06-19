#include "holberton.h"

/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @Size: Variable type int that indicates the number of lines to be printed.
 */

void print_triangle(int Size)
{
	unsigned char SolveCharacter = 0, Counter_Space = 0;
	unsigned char Counter_Character_hashtag = 1, State = 0;

	while (!State)
	{
		if (Size <= 0)
			SolveCharacter = '\n';
		else if (Counter_Space < (Size - Counter_Character_hashtag))
			SolveCharacter = ' ', Counter_Space++;
		else if ((Counter_Space >= (Size - Counter_Character_hashtag))
			 && (Counter_Space < Size))
			SolveCharacter = '#', Counter_Space++;
		else if ((Counter_Space == Size) && (SolveCharacter != '\n'))
			SolveCharacter = '\n';
		else if (SolveCharacter == '\n')
		{
			Counter_Space = 0, Counter_Character_hashtag++;
			SolveCharacter = 0;
		}

		if ((!(Counter_Character_hashtag == Size + 1) &&
		     (SolveCharacter)) || (Size == 0))
			_putchar(SolveCharacter);
		if (Size <= 0 || (Counter_Character_hashtag == Size + 1))
			State = 1;

	}
}
