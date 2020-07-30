#include <stddef.h>
#include <stdio.h>
/**
 * binary_to_uint - function that draws a straight line in the terminal.
 * @b: The number to be checked
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, aux = 1;
	unsigned int t = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		t += (b[i] - 48) * aux;
		aux = aux * 2;
	}
	return (t);
}
