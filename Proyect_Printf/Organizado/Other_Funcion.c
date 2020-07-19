#include "holberton.h"

const char **
Isdigit(const char **String)
{
	(*String)++;

	while ((**String))
	{
		if ((**String) == ' ' || (**String) == '\t')
			(*String)++;
		else
			return (&*(String));
	}
	return (&*(String));
}
