#include "holberton.h"

/**
 *   jack_bauer - function that prints every minute of the day of
 *                Jack Bauer, starting from 00:00 to 23:59.
 *
 */

void jack_bauer(void)
{
	unsigned char FirstDigit, SecondDigit, ThirdDigit, FourthDigit;
	unsigned char SolveVariables, AccountantColumns;
	unsigned int AccountantLine, State;

	AccountantColumns = AccountantLine = 0;
	FirstDigit = SecondDigit = ThirdDigit = FourthDigit = '0';
	while (AccountantLine < NUMBER_OF_LINES)
	{
		if (SecondDigit == '9' + 1)
			SecondDigit = '0', FirstDigit++;
		else if (ThirdDigit == '6')
			ThirdDigit = '0', SecondDigit++;
		else if (FourthDigit == '9' + 1)
			FourthDigit = '0', ThirdDigit++;
		else if (AccountantColumns == COLUMN_ZERO)
		{
			SolveVariables =  FirstDigit, AccountantColumns++;
			State = 1;
		}
		else if (AccountantColumns == COLUMN_ONE)
			SolveVariables =  SecondDigit, AccountantColumns++;
		else if (AccountantColumns == COLUMN_TWO)
			SolveVariables =  ':', AccountantColumns++;
		else if (AccountantColumns == COLUMN_THREE)
			SolveVariables =  ThirdDigit, AccountantColumns++;
		else if (AccountantColumns == COLUMN_FOUR)
			SolveVariables =  FourthDigit, AccountantColumns++;
		else if (AccountantColumns == COLUMN_FIVE)
			SolveVariables =  '\n', AccountantColumns++;
		else
		{
			FourthDigit++, AccountantColumns = 0, AccountantLine++;
			State = 0;
		}

		if (State)
			_putchar(SolveVariables);
	}
}
