#include "holberton.h"
/**
 * is_prime - return 1 if n is prime number
 * @n: int
 * @i: int
 * Return: int
 */
int is_prime(int i, int n)
{
	if (n == 1)
		return (0);
	else if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(i + 1, n));
}
/**
 * is_prime_number - return 1 if n is prime number
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	return (is_prime(2, n));
}
