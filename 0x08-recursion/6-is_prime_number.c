#include "holberton.h"
/**
 * is_prime_number - Function that returns 1 if the input integer is a
 *                   prime number, otherwise return 0.
 * @Number: Prime number to find.
 * Return: Returns 1 if the input integer is a prime number, otherwise
 *         return 0.
 */

int is_prime_number(int Number)
{
	int FoundNumberPrime(int, int);

	return (FoundNumberPrime(2, Number));
}

/**
 * FoundNumberPrime - Function that does the process of finding out
 *                    whether the variable Number is a prime number or not
 * @FoundNumber: It will serve as a counter, to find out if the data in
 *               the vairalbe number is prmo or not
 * @Number: Data with which we will find out if it is a cousin or not.
 * Return: Returns 1 if the input integer is a prime number,
 *         otherwise return 0.
 */

int FoundNumberPrime(int FoundNumber, int Number)
{
	if (FoundNumber <= Number)
		if (Number <= 0)
			return (0);
		else if ((FoundNumber < Number) && !(Number % FoundNumber))
			return (0);
		else if ((FoundNumber == Number) && !(Number % FoundNumber))
			return (1);
		else
			return (FoundNumberPrime(FoundNumber + 1, Number));
	else
		return (0);
}
