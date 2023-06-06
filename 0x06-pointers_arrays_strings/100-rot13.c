#include "main.h"

/**
 * rot13 - a function a that encodes a string using rot13
 * (https://en.wikipedia.org/wiki/ROT13
 * @s: a pointer to an array
 *
 * Return: a pointer
 */

char *rot13(char *s)
{
	char alpha_b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha_r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int index, count = 0;

	while (*(s + count) != '\0')
	{
		index = 0;
		while (*(alpha_b + index) != '\0')
		{
			if (s[count] == alpha_b[index])
			{
				s[count] = alpha_r[index];
				break;
			}
			index++;
		}
		count++;
	}
	return (s);
}
