#include <stdio.h>

/**
 * main - entry - point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	unsigned long int Total_Result = 2, Number = 1;
	int count;

	printf("%d, ", 1);

	for (count = 1; count < 98; count++)
	{
		printf("%lu", Total_Result);
		if (count != 97)
			putchar(44), putchar(32);
		Total_Result += Number;
		Number = Total_Result - Number;
	}
	putchar(10);
	return (0);
}
