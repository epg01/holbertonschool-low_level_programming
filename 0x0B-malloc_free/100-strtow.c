#include "holberton.h"

int count_words(char *s)
{
	int i, count;

	for (i = 1; s[i]; i++)
        {
                if (s[i] != ' ' && s[i + 1] == ' ')
                        count++;
        }
	return (count);
}

int count_chars(char *c)
{
	int i, count;

	for (i = 0; c[i]; i++)
	{
		if (c[i] == ' ')
			break;
		count++;
	}
	return (count);
}

/**
 * strtow - split a string into words
 * @str: pointer to a tring
 *
 * Return: pointer to an array of strings.
 */
char **strtow(char *str)
{
	int i, j, w = 0, words, chars;
	char **p;

	if (str == NULL)
		return (NULL);

	words = count_words(str);

	p = malloc(sizeof(char *) * words + 1);



	for (i = 0; i < words ; i++)
	{
		for (j = w; str[j]; j++)
		{
			if (str[j] == ' ')
				continue;
			if (str[j] != ' ')
			{
				chars = count_chars(str + j);
				printf("%i", chars);
				w = j + chars;
			}
		}
		p[i] = malloc(sizeof(char) * chars);
		if (p[i] == NULL)
		{
			free(p[i]);
			return (NULL);
		}
	}
	return (p);
}
