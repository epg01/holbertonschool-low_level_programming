#include "holberton.h"
/**
 * is_prime_number - Function that returns 1 if the input integer is a
 *                   prime number, otherwise return 0.
 * @Number: Prime number to find.
 * Return: returns 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int Number)
{
	int FoundNumberPrime(int, int);

	return (FoundNumberPrime(2, Number));
}

/**
 * FoundNumberPrime - 
 * @FoundNumber:
 * @Number:
 * Return: 
 */

int FoundNumberPrime(int FoundNumber,int Number)
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
