#include "main.h"
/**
  * _strlen - computes the length of a string
  * @s: the string
  * Return: the length of the string
  */
int _strlen(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		len = 1 + _strlen(s + 1);
	}
	return (len);
}
/**
  * To_nonStar - checks the nearest position to the right
  * of a given point where a non-asterick character is located
  * @s: the given string
  * @p: the given position
  * Return: the position, if found; -1, if not found
  */
int To_nonStar(char *s, int p)
{
	int r = -1;

	if (*s != '\0')
	{
		if (*(s + p) == '*')
		{
			p++;
			r = To_nonStar(s, p);
		}
		else
		{
			r = p;
		}
	}

	return (r);
}
/**
  * adjust - locates the position where a character is located
  * on a given string, from a given position to the right
  * @s: the given string
  * @p: current position
  * @c: character sought for
  * Return: the position where c is found, or -1 if not found
  */
int adjust(char *s, int p, char c)
{
	int r = -1;

	if (*(s + p) != '\0')
	{
		if (*(s + p) != c)
		{
			r = adjust(s, (p + 1), c);
		}
		else if (*(s + p) == *(s + p + 1))
		{
			r = adjust(s, (p + 1), c);
		}
		else
		{
			r = p;
		}
	}
	return (r);
}





/**
  * compare - compare some characters from both strings
  * @s1: the first string argument
  * @s2: the second string argument
  * @p1: the current position on the first string
  * @p2: the current position on the second string
  * Return: the number of steps to shifted forward on the strings
  */
int compare(char *s1, char *s2, int p1, int p2)
{
	int result = 1;

	if ((*(s1 + p1) != '\0') && (*(s2 + p2) != '\0'))
	{
		if (*(s2 + p2) != '*')
		{
			if (*(s1 + p1) != *(s2 + p2))
				result = 0;
			else
				result = compare(s1, s2, (p1 + 1), (p2 + 1));

		}
		else if (_strlen(s2) == 1)
			result = 1;
		else
		{
			p2 = To_nonStar(s2, p2);
			if (p2 != -1)
			{
				p1 = adjust(s1, p1, *(s2 + p2));
				if (p1 != -1)
					result = compare(s1, s2, p1, p2);
				else
					result = 0;
			}
			else
				result = 1;
		}
	}
	else if ((*(s1 + p1) == '\0') && (*(s2 + p2) == '\0'))
		result = 1;
	else
		result = 0;

	return (result);
}

/**
  * wildcmp - compares two strings, with the wildcard *
  * (for any any character of any any length)
  * @s1: first string
  * @s2: second string
  * Return: 1, if s2 implies s1 and 0, if not
  */
int wildcmp(char *s1, char *s2)
{
	int response;

	response = compare(s1, s2, 0, 0);
	return (response);
}
