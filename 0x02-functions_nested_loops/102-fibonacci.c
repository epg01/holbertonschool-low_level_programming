#include "holberton.h"

#define THEPRINTLASTNUMBER 50
/**
 * Print_Space - Print characters that are not numbers
 * @Number: Number of characters.
 */

void Print_Space(int Number)
{
	char Accountant = 0, SolveCharacter = ',';

	while (Accountant < Number)
	{
		Accountant++;
		_putchar(SolveCharacter);
		if (Accountant == 1)
			SolveCharacter = ' ';
	}

}
/**
 * PrintNumberLetter - print number 1 to 5.
 * @Number: Data to be printed.
 */

void PrintNumberLetter(unsigned long int Number)
{
	signed char Accountant = 3;
	unsigned char SolveCharacter;

	SolveCharacter = Number % 10 + '0';
	while (Accountant-- > 0)
	{
		_putchar(SolveCharacter);
		if (Accountant == 2)
			SolveCharacter = ',';
		else
			SolveCharacter = ' ';
	}
}

/**
 * PrintSucecionFibonacci - Print the rest of the numbers.
 * @Number: Data to be printed.
 */

void PrintSucecionFibonacci(unsigned long int Number)
{
	unsigned char State0 = 1;
	unsigned char SolveCharacter;
	unsigned long int PowerOf10 = 10;
	static unsigned char Counter;

	Counter++;

	while (!(PowerOf10 == 1))
	{
		if ((Number / PowerOf10) && State0)
			PowerOf10 *= 10;
		else if (State0)
			State0 = 0;
		else if (PowerOf10)
		{
			if (Number >= 10 || PowerOf10 >= 10)
			{
				PowerOf10 /= 10;
				SolveCharacter = Number / PowerOf10 + '0';
				Number %= PowerOf10;
				_putchar(SolveCharacter);
			}
			else
			{
				PrintNumberLetter(Number), PowerOf10 /= 10;
				Number /= 10;
			}
		}

		if ((Counter == (THEPRINTLASTNUMBER - 3))  && (PowerOf10 == 1))
		{
			break;
		}
		else if (PowerOf10 == 1)
			Print_Space(2);
	}

}



/**
 * main - Function that controls the data entry processes towards
 *        the other functions.
 * Return: Successful exit.
 */

int main(void)
{
	unsigned char SolveCharacter = 0;
	unsigned char Counter = 0, State = 0;
	unsigned long int Number, Pre_Number;

	Number = 0, Pre_Number = 2;

	while (!(SolveCharacter == ('\n' + 1)))
	{
		if (Number <= 2)
		{
			Number++;
			PrintNumberLetter(Number);
		}
		else if (Counter < THEPRINTLASTNUMBER)
		{
			Number = Number + Pre_Number;
			Pre_Number = Number - Pre_Number;
			PrintSucecionFibonacci(Number);
		}
		else if (Counter == THEPRINTLASTNUMBER)
			SolveCharacter = '\n', State = 1;
		else if (SolveCharacter == '\n')
			SolveCharacter++;
		if (State == 1)
			_putchar(SolveCharacter), State = 0;
		Counter++;
	}
	return (0);
}
