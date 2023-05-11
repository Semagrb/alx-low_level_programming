#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Reutns: the length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comapator - compares each character of the string.
 * @s: string
 * @n1: smallest inerator.
 * @n: biggest interator.
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
