#include "holberton.h"
/**
 * mul - find sqr
 * @n: int
 * @i: int
 * Return: int
 */
int mul(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (mul(i + 1, n));
	}
}

/**
 * _sqrt_recursion - find sqr
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (mul(0, n));

}
