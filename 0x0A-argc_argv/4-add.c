#include <stdio.h>
#include "holberton.h"

/**
 * main - Prints the sum of positive numbers.
 * @argc: Arguent count.
 * @argv: Array of arguments.
 * Return: 0 for success, 1 for error.
 */

int main(int argc, char *argv[])
{
	int sum, num, i, j;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1, sum = 0; argv[i] != '\0'; i++)
	{
		for (j = 0, num = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			num = num * 10 + (argv[i][j] - '0');
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
