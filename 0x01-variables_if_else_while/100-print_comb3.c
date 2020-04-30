#include <stdio.h>
/**
 * main - program that prints all possible
 *        different combinations of two digits.
 * Return: exit successful.
 */

#define VALUEINICIAL '0'    /* value at which the output begins.*/
#define BREAKWHILE ('\n' + 1)  /* Cycle breaking condition */
#define NUMBER9 '9'   /* It controls the initialization of some variables*/
#define NUMBER0  0    /* Initialize the accountant variable */
#define NUMBER1  1    /* one of the conditions controls me */
#define NUMBER2  2    /* one of the conditions controls me */

int main(void)
{
	unsigned int FirstDigit, SecondDigit,  StoredCharacter, Accountant;

	FirstDigit = VALUEINICIAL;
	SecondDigit = VALUEINICIAL + 1;
	Accountant = NUMBER0;
	StoredCharacter = VALUEINICIAL;

	while (StoredCharacter != BREAKWHILE)
	{
		putchar(StoredCharacter);

		if (SecondDigit > NUMBER9)
			FirstDigit++, SecondDigit = FirstDigit, SecondDigit++;

		if (StoredCharacter >= '0' && StoredCharacter <= '9')
			Accountant++;
		if (Accountant == NUMBER1)
			StoredCharacter = SecondDigit, SecondDigit++;
		else if (Accountant == NUMBER2)
			StoredCharacter = ',', Accountant = NUMBER0;
		else if (StoredCharacter == ',')
			StoredCharacter = ' ';
		else if (StoredCharacter == ' ')
			StoredCharacter = FirstDigit;

		if (StoredCharacter == (BREAKWHILE - 1))
			StoredCharacter++;
		else if (FirstDigit == NUMBER9)
			StoredCharacter = '\n';
	}
	return (0);
}
