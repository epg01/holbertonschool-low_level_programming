#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function that prints a random number and also its last digit.
 *
 * Return: exit successful exit.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d ", n, n % 10);
		printf("and is greater than 5\n");
	}
	else if (((n % 10) < 6) && (n % 10))
	{
		printf("Last digit of %d is %d ", n, n % 10);
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("Last digit of %d is %d ", n, n % 10);
		printf("and is 0\n");
	}
	return (0);
}
