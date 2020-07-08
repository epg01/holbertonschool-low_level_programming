#include "holberton.h"

unsigned int StrlenM(char *String1);

/**
 * argstostr - Function that concatenates all the arguments of your program.
 * @ac: Counter of the argument.
 * @av: Pointer to array of pointer that contain the arguments.
 * Return: Returns a pointer to a new string, or NULL if it fails
 *          Each argument should be followed by a \n in the new string.
 */

char *argstostr(int ac, char **av)
{
	if (ac && av)
	{
		int Counter = 0;
		char **Temp;
		unsigned char State0 = 1, State1 = 1, State2 = 1;
		char *Pointer_To_String;

		Temp = av;
		while (State0)
		{
			if (*av && State2)
				Counter += StrlenM(*av++);
			else if (!(*av) && State2)
				Counter += 1, av = Temp, State2 = 0;
			else if (State1)
			{
				Pointer_To_String = (char *)malloc(Counter * sizeof(char));

				if  (!Pointer_To_String)
				{
					free(Pointer_To_String);
					return (NULL);
				}
				State1 = 0;
			}
			else if (!*av)
			{
				*Pointer_To_String = '\0';
				Pointer_To_String -= (Counter - 1);
				State0 = 0;
			}
			else if (**av)
				*Pointer_To_String++ = *(*av)++;
			else
			{
				*Pointer_To_String++ = '\n';
				av++;
			}
		}
		return (Pointer_To_String);
	}
	else
		return (NULL);
}


/**
 * StrlenM - Function that counts characters, and if the two pointers are
 *          NULL their quantity is 1, requirements for the holberton exercise.
 * @String1: Pointer to string character.
 * Return: Returns the length of the visible characters plus the null.
 *         If both are null returns 1, demands for the exercise.
 */

unsigned int StrlenM(char *String1)
{
	unsigned char State;
	unsigned int Counter = 1;

	State = 1;

	while (State)
		if (String1 && (*String1))
			Counter++, String1++;
		else
			State--;

	return (Counter);
}
