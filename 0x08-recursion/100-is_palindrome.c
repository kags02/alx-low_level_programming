#include "main.h"

int length(char *h);
int check_palindrome(char *h, int len, int index);
int is_palindrome(char *h);

/**
 * length - the function will return the length of a string.
 * @h: the string we will use int the function.
 *
 * Return: The length of the string after recursion.
 */
int length(char *h)
{
	int x = 0;

	if (h[x])
	{
		x = x + 1;
		x += length(h + x);
	}
	return (x);
}

/**
 * check_palindrome - checks for palindrome.
 * @h: The string.
 * @len: The length of h.
 * @index: The index of the string to be checked.
 *
 * Return: 1 if palindrome and 0 if not.
 */
int check_palindrome(char *h, int len, int index)
{
	if (h[index] == h[len / 2])
		return (1);

	if (h[index] == h[len - index - 1])
		return (check_palindrome(h, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int v = 0;
	int len = length(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, v));
}

