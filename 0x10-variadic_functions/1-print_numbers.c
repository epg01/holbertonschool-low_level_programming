#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - suma
 * @separator: The first string
 * @n: the second string
 * ...: arguments
 * Return: dest
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
