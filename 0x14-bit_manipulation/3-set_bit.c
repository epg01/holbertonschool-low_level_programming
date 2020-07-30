/**
 * set_bit - function that draws a straight line in the terminal.
 * @n: The number to be checked
 * @index: number
 * Return: number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
