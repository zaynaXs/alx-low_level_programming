#include "main.h"
int _strlen(char *s);

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i;
	int l;
	int mid;
	char temp;

	l = _strlen(s);
	mid = l / 2;
	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}

/**
 * _strlen - get length of a string
 * @s: string to count
 * Return: length of string as integer
 */

int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s++)
	{
		l++;
	}
	return (l);
}

