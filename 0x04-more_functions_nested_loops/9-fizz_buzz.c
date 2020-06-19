#include "holberton.h"

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
 */

int main(void)
{
	unsigned char Counter, SolveCharacter;

	for (Counter = 1; Counter <= NUMBER_LIMIT; Counter++)
	{
		if (!(Counter % MULTIPLES_OF_THREE))
			Print_Word("Fizz");
		else if (!(Counter % MULTIPLES_OF_FIVE))
			Print_Word("Buzz");
		else if (!(Counter % MULTIPLES_OF_FIVE) &&
			 !(Counter % MULTIPLES_OF_THREE))
			Print_Word("FizzBuzz");
		else
			Print_Int(Counter);
		if (Counter < NUMBER_LIMIT)
			SolveCharacter = ' ';
		else
			SolveCharacter = '\n';
		_putchar(SolveCharacter);
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
		_putchar(*Pointer_Character++);
	}
}

#define POWER_OF_10    10
/**
 * Print_Int - Function that prints numbers.
 * @Number: Number to be printed.
 */

void Print_Int(char Number)
{

	if (Number > 9)
	{
		_putchar(Number / 10 + '0');
		_putchar(Number % 10 + '0');
	}
	else
		_putchar(Number % 10 + '0');
}
