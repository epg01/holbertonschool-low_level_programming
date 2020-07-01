#include "holberton.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse.
 * @ArrayCharacter: String to be printed in reverse order.
 */

void _print_rev_recursion(char *ArrayCharacter)
{
	if (*ArrayCharacter)
	{
		_print_rev_recursion(ArrayCharacter + 1);
		_putchar(*ArrayCharacter);
	}
	else
		return;
}
