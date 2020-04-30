#include <stdio.h>
/**
 * main - program that prints the numbers from 00 to 99.
 * Return: exit successful.
 */
int main(void)
{
	unsigned int Accountant1, Accountant2, StoredCharacter, Accountant3;

	Accountant1 = '0';
	Accountant2 = '0';
	Accountant3 = 0;
	StoredCharacter = '0';

	while(StoredCharacter != ('\n' + 1))
	{
		putchar(StoredCharacter);

		if (Accountant2 > '9')
		{
			Accountant2 = '0';
			Accountant1++;
		}

		if (StoredCharacter >= '0' && StoredCharacter <= '9')
			Accountant3++;

		if (Accountant3 == 1)
		{
			StoredCharacter = Accountant2;
			Accountant2++;
		}
		if (Accountant3 == 2)
			StoredCharacter = ',', Accountant3 = 0;
		else if(StoredCharacter == ',')
			StoredCharacter = ' ';
		else if (StoredCharacter == ' ')
			StoredCharacter = Accountant1;

		if (StoredCharacter == '\n')
			StoredCharacter++;
		else if (Accountant1 == ('9' + 1))
			StoredCharacter = '\n';
	}
	return (0);
}
