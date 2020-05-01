#include <stdio.h>
/**
 * main - program that prints all possible different
 *        combinations of three digits.
 * Return: exit successfull.
 */
int main(void)
{
	unsigned int FirstDigit, SecondDigit, ThirdDigit, StoredCharacter;
	unsigned int Accountant;

	FirstDigit  = '0';
	SecondDigit = '1';
	ThirdDigit  = '2';
	StoredCharacter = FirstDigit;
	Accountant  = 0;

	while (StoredCharacter != ('\n' + 1))
	{
		putchar(StoredCharacter);
		if (ThirdDigit == ('9' + 1))
			++SecondDigit, ThirdDigit = SecondDigit + 1;
		if (StoredCharacter >= '0' && StoredCharacter <= '9')
			Accountant++;
		if (Accountant == 1)
			StoredCharacter = SecondDigit;
		else if (Accountant == 2)
			StoredCharacter = ThirdDigit, ThirdDigit++;
		else if (Accountant == 3)
			StoredCharacter = ',', Accountant = 0;
		else if (StoredCharacter == ',')
			StoredCharacter = ' ';
		else if (StoredCharacter == ' ')
			StoredCharacter = FirstDigit;
		if (SecondDigit == '9' + 1)
		{
			FirstDigit++, SecondDigit = FirstDigit + 1;
			ThirdDigit = SecondDigit + 1;
		}
		if (StoredCharacter == '\n')
			StoredCharacter++;
		else if ((FirstDigit == '7') && (SecondDigit == '9'))
			StoredCharacter = '\n';
	}
	return (0);
}
