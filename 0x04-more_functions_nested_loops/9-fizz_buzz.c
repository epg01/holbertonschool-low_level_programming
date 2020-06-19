#include <stdio.h>

#define NUMBER_LIMIT        100
#define MULTIPLES_OF_THREE  3
#define MULTIPLES_OF_FIVE   5

void Print_Word(char *Pointer_Character);
void Print_Int(char Number);

/**
 * main - a program that prints the numbers from 1 to 100, followed by a
 *        new line. But for multiples of three print Fizz instead of the
 *        number and for the multiples of five print Buzz. For numbers which
 *        are multiples of both three and five print FizzBuzz.
 * Return: Successfull exit.
 */

int main(void)
{
	unsigned char Counter, SolveCharacter;

	for (Counter = 1; Counter <= NUMBER_LIMIT; Counter++)
	{
		if (!(Counter % MULTIPLES_OF_FIVE) &&
		    !(Counter % MULTIPLES_OF_THREE))
			Print_Word("FizzBuzz");
		else if (!(Counter % MULTIPLES_OF_THREE))
			Print_Word("Fizz");
		else if (!(Counter % MULTIPLES_OF_FIVE))
			Print_Word("Buzz");
		else
			Print_Int(Counter);
		if (Counter < NUMBER_LIMIT)
			SolveCharacter = ' ';
		else
			SolveCharacter = '\n';
		putchar(SolveCharacter);
	}
	return (0);
}

/**
 * Print_Word - Functions that prints letters.
 * @Pointer_Character: Pointer to characters.
 */

void Print_Word(char *Pointer_Character)
{
	while (*Pointer_Character)
	{
		putchar(*Pointer_Character++);
	}
}

#define POWER_OF_10    10
/**
 * Print_Int - Function that prints numbers.
 * @Number: Number to be printed.
 */

void Print_Int(char Number)
{
	unsigned char PowerOf10 = POWER_OF_10, SolveCharacter;
	unsigned char State  = 1;

	while (PowerOf10 != 1)
	{
		if (Number > POWER_OF_10 - 1)
		{
			if (State)
			{
				SolveCharacter = (Number / PowerOf10) + '0';
				State = 0;
			}
			else if (PowerOf10 == POWER_OF_10)
			{
				SolveCharacter = Number % PowerOf10 + '0';
				PowerOf10 /= POWER_OF_10;
			}
		}
		else
			SolveCharacter = Number % POWER_OF_10 + '0';
		putchar(SolveCharacter);
		if (Number < POWER_OF_10)
			return;
	}
}
