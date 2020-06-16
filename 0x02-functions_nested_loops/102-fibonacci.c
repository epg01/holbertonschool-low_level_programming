#include "holberton.h"
#include <stdio.h>

#define ThePrimerNumbers 4

void PrintNumberLetter(unsigned long int Number)
{
	putchar(Number % 10 + '0');
	putchar(',');
	putchar(' ');


}
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
				putchar(SolveCharacter);
			}
			else
			{
				PrintNumberLetter(Number), PowerOf10 /= 10;
				Number /= 10;
			}
		}

		if (Counter == 1)
			break;
		if (PowerOf10 == 1)
			putchar(','), putchar(' ');
	}

}



/**
 * main - Function that controls the data entry processes towards
 *        the other functions.
 * Return: Successful exit.
 */

int main()
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
		else if (Counter < 50)
		{
			Number = Number + Pre_Number;
			Pre_Number = Number - Pre_Number;
			PrintSucecionFibonacci(Number);
		}
		else if (Counter == 50)
			SolveCharacter = '\n', State = 1;
		else if (SolveCharacter == '\n')
			SolveCharacter++;
		if (State == 1)
			putchar(SolveCharacter), State = 0;
		Counter++;
	}
	return 0;
}
