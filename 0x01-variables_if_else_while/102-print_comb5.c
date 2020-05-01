#include <stdio.h>
/**
 *main - program that prints all possible combinations of two two-digit numbers
 * Return: exit successfull.
 */
int main(void)
{
	unsigned int FirstDigit, SecondDigit, FourthDigit, StoredCharacter;
	unsigned int Accountant, ThirdDigit;

	FirstDigit = SecondDigit = ThirdDigit = '0';
	FourthDigit = '1', StoredCharacter = FirstDigit, Accountant = 0;

	while (StoredCharacter != ('\n' + 1))
	{
		putchar(StoredCharacter);

		if (FourthDigit == ('9' + 1))
			ThirdDigit++, FourthDigit = '0';
		if (ThirdDigit == ('9' + 1))
			SecondDigit++, ThirdDigit = FirstDigit, FourthDigit = SecondDigit + 1;
		if (SecondDigit == ('9' + 1))
		{
			FirstDigit++, SecondDigit = '0';
			ThirdDigit = FirstDigit, FourthDigit = SecondDigit + 1;
		}
		if (Accountant == 0)
			StoredCharacter = SecondDigit, Accountant++;
		else if (Accountant == 1)
			StoredCharacter = ' ', Accountant++;
		else if (Accountant == 2)
			StoredCharacter = ThirdDigit, Accountant++;
		else if (Accountant == 3)
			StoredCharacter = FourthDigit++, Accountant++;
		else if (Accountant == 4)
			StoredCharacter = ',', Accountant++;
		else if (Accountant == 5 && (StoredCharacter != '\n'))
			StoredCharacter = ' ', Accountant++;
		else if (Accountant == 6)
			StoredCharacter = FirstDigit, Accountant = 0;
		if (StoredCharacter == '\n')
			StoredCharacter++;
		else if ((FirstDigit == '9') && (FourthDigit == ('9' + 1))
			 && (Accountant == 5))
			StoredCharacter = '\n';
	}
	return (0);
}
