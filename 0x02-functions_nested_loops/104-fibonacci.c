#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long long num1, num2, tmp;
	int count;

	num1 = 1;
	num2 = 2;
	count = 2;

	printf("%llu", num1);
	printf(", ");
	printf("%llu", num2);

	while (count < 98)
	{
		if (count < 98)
			printf(", ");
		tmp = num1;
		num1 = num2;
		num2 = tmp + num1;
		count++;
		printf("%llu", num2);
	}
	printf("\n");
	return (0);
}
