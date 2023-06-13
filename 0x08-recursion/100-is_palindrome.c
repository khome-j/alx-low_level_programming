#include "main.h"

int check_palindrome(char *s, int start, int end);
int str_len(char *s);

/**
 * is_palindrome - a function that checks for palindrome.
 * @s: a pointer to a string
 *
 * Return: 1 if a string is a palindrome, else 0.
 */

int is_palindrome(char *s)
{
	int start, end;

	start = 0;
	end = str_len(s) - 1;

	return (check_palindrome(s, start, end));
}


/**
 * str_len - a function that counts a string
 * @s: a string
 *
 * Return: the length of a string.
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str_len(s + 1));
}


/**
 * check_palindrome - a function that checks if a string is a palindrome.
 * @s: string
 * @start: an index that denotes the beginning of the string.
 * @end: an index that denotes the end of the string.
 *
 * Return: 1 if a string is a palindrome, else 0.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (*(s + start) == *(s + end))
	{
		start++, end--;
		return (check_palindrome(s, start, end));
	}
	else
		return (0);
}
