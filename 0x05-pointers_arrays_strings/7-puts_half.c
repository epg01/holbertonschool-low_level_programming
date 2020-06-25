void puts_half(char *str)
{
	int digits;

	digits = 0;
	while (*(str + digits) != '\0')
	{
		digits++;
	}
	if (digits % 2 == 0)
	{
		digits /= 2;
	} else
	{
		digits++;
		digits /= 2;
	}
	while (*(str + digits) != '\0')
	{
		_putchar(*(str + digits));
		digits++;
	}
	_putchar('\n');
}
