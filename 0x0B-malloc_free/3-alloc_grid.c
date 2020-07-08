#include "holberton.h"

unsigned int Creando_Array(int **DoblePointer, int wigth, int height);
void Inicializacion_Del_Array(int **Doble_Pointer, int width, int height);

/**
 * alloc_grid - Function that returns a pointer to a 2 dimensional
 *              array of integers
 * @width:  Width array.
 * @height: Height array.
 * Return: The function should return NULL on failure
 *         If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	if (width > 0 && height > 0)
	{
		int **Doble_Pointer = (int **)malloc(height * sizeof(int *));

		if (Doble_Pointer)
		{
			unsigned char State;

			State = Creando_Array(Doble_Pointer, width, height);

			if (!State)
			{
				Inicializacion_Del_Array(Doble_Pointer, width, height);
				return (Doble_Pointer);
			}
			else
			{
				free(Doble_Pointer);
				return (NULL);
			}
		}
		else
		{
			free(Doble_Pointer);
			return (NULL);
		}
	}
	else
		return (NULL);
}

/**
 * Inicializacion_Del_Array - Function to initialize the array with zeros.
 * @Doble_Pointer: Pointer pointing to a group n of pointers.
 * @width:  Width array.
 * @height: Height array.
 */

void Inicializacion_Del_Array(int **Doble_Pointer, int width, int height)
{
	int Solve_Width = width;

	while (height)
	{
		if (width)
			(*Doble_Pointer)[--width] = 0;
		else
		{
			Doble_Pointer++;
			width = Solve_Width;
			height--;
		}
	}
}

/**
 * Creando_Array - Function to create the matrix of width * height.
 * @DoblePointer: Pointer pointing to a group n of pointers.
 * @width:  Width array.
 * @height: Height array.
 * Return: Returns 1 if the zero array could not be created
 *         where it was created.
 */

unsigned int Creando_Array(int **DoblePointer, int width, int height)
{
	int Counter = height;
	unsigned char State1, State0;

	State0 = State1 = 1;
	while (State0)
	{
		if (Counter && State1)
		{
			Counter--;
			*DoblePointer = (int *)malloc(width * sizeof(int));
		}
		if (*DoblePointer && State1)
			DoblePointer++;
		else if (Counter < height)
		{
			free(*DoblePointer--);
			Counter++;
			State1 = 0;
		}

		if (Counter == height)
			return (1);
		else if (Counter == 0)
			State0--;
	}
	return (0);
}
