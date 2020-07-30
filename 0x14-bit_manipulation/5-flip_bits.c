/**
 * flip_bits - function that draws a straight line in the terminal.
 * @n: The number to be checked
 * @m: the number to be checked
 * Return: changes necesaries
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int t = 0, x = 0;

	t = n ^ m;

	while (t > 0)
	{
		if ((t & 1) == 1)
			x++;
		t = t >> 1;
	}
	return (x);
}
