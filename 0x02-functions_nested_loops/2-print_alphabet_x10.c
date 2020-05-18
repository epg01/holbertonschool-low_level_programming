#include "holberton.h"

/*
 * Certain symbolic constants are defined
 */

#define VALUEFORCHARACTERS    'a'
#define INITIALIZERFORCOLUMNS  00
#define FORTHEROWS             0XA

/*
 * A function is declared or as the prototype function is sometimes called
 */

unsigned char CalculateTheLength(void);

/**
 *   print_alphabet_x10 - function that prints 10 times the alphabet,
 *                        in lowercase
 */

void print_alphabet_x10(void)
{
	unsigned char SolveCharacterAlpahabet;
	unsigned char NumberOfLines, NumberOfColumns, CharcharacterCounter;

	CharcharacterCounter = CalculateTheLength();

	SolveCharacterAlpahabet = VALUEFORCHARACTERS;
	NumberOfColumns = INITIALIZERFORCOLUMNS;
	NumberOfLines = FORTHEROWS;
	if (CharcharacterCounter)
	{
		while (NumberOfLines)
		{
			if ((NumberOfColumns < CharcharacterCounter) ||
			    (SolveCharacterAlpahabet == '\n'))
			{
				_putchar(SolveCharacterAlpahabet++);
				NumberOfColumns++;
			}
			else if (NumberOfColumns == CharcharacterCounter)
				SolveCharacterAlpahabet = '\n';
			else
			{
				SolveCharacterAlpahabet = 'a';
				NumberOfColumns = 00, NumberOfLines--;
			}
		}
	}
	else
		return;
}

/**
 *  CalculateTheLength - calculates the length of the characters to be printed
 *  @x: variable related to macro
 */

/*
 *  Place where the macro used in the while condition was defined
 */

#define CONDITION_WHILE(x) (((x) >= ('a')) && ((x) <= ('z')))

unsigned char CalculateTheLength(void)
{
	int Accountant;
	int SolveCharacterAlpahabet;

	SolveCharacterAlpahabet = 'a', Accountant = 0;
	while (CONDITION_WHILE(SolveCharacterAlpahabet))
		Accountant++, SolveCharacterAlpahabet++;
	return (Accountant);
}
