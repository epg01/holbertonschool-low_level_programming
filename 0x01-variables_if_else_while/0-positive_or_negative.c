#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Function that prints a random number and indicate whether it is
 *        it is possitive, negative or zero
 * Return: Successful exit
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is possitive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
