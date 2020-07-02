#include "holberton.h"
/**
 * _strlen_recursion - writes nudscfdsmbers
 * @s: pointer
 * Return: len
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}

/**
 * compare - writes nudscfdsmbers
 * @s: pointer
 * @i: int
 * @f: int
 * Return: 1 or 0
 */
int compare(char *s, int i, int f)
{
	if (s[i] != s[f])
		return (0);
	else if (i <= f)
		return (compare(s, i + 1, f - 1));
	else
		return (1);
}

/**
 * is_palindrome - writes nudscfdsmbers
 * @s: pointer
 * Return:intt
 */
int is_palindrome(char *s)
{
	int strl;

	strl = _strlen_recursion(s) - 1;
	return (compare(s, 0, strl));
}
