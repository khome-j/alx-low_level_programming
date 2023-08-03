#include "main.h"
/**
  * _strlen - computes the length of a string
  * @s: the given string
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int result = 0;

	if (*s != '\0')
	{
		result = 1 + _strlen(s + 1);
	}

	return (result);
}


/**
  * is_same - checks if a character in a string from a position
  * from the left is same as the a character in its flip position
  * (from the right)
  * @s: the given string
  * @n: the character position offset from the left (start of the string)
  * Return: 1, if same and 0, if not
  */
int is_same(char *s, int n)
{
	int L = _strlen(s);
	int mid = (L / 2);
	int result;

	if ((L != 0) && (n < mid))
	{
		if (*(s + n) == *(s + L - 1 - n))
		{
			result = is_same(s, (n + 1));
		}
		else
		{
			result = 0;
		}
	}
	else
	{
		result = 1;
	}

	return (result);
}

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: the given string
  * Return: 1 if it is, and 0 if it is not
  */
int is_palindrome(char *s)
{
	int response;

	response = is_same(s, 0);
	return (response);
}
