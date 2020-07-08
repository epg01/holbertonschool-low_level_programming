#include "holberton.h"

unsigned int Creando_Array(int **DoblePointer, int wigth, int height);
void Inicializacion_Del_Array(int **Doble_Pointer, int width, int height);

/**
 *
 *
 *
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
				free (Doble_Pointer);
				return (NULL);
			}
		}
		else
		{
			free (Doble_Pointer);
			return (NULL);
		}
	}
	else
		return (NULL);
}

void Inicializacion_Del_Array(int **Doble_Pointer, int width, int height)
{
	int Solve_Width = width;

	while (height)
	{
		if (width)
			(*Doble_Pointer)[width--] = 0;
		else
		{
			Doble_Pointer++;
			width = Solve_Width;
			height--;
		}
	}
}

/**
 *
 *
 *
 */

unsigned int Creando_Array(int **DoblePointer, int width, int height)
{
        int Counter = height;
        int *Temp = *DoblePointer;
        unsigned char State1, State0;

        State0 = State1 = 1;
        while (State0)
        {
		if (Counter >= 0 && State1)
		{
			Counter--;
			*DoblePointer = (int *)malloc(width * sizeof(int));
		}

		if (DoblePointer && State1)
			DoblePointer++;
		else if (Counter < height)
		{
			Temp = *DoblePointer--;
			Counter++;
			State1--;
		}

		if (!Temp)
			free(Temp);

		if (Counter == height)
			return (1);
		else if (Counter == 0)
			State0--;
        }
	return (0);
}
