#include "holberton.h"
/**
 * get_bit - function that draws a straight line in the terminal.
 * @n: The number to be checked
 * @index: the posicion
 * Return: the byte
 */
int get_bit(unsigned long int n, unsigned int index)
{

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
