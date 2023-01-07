#include "main.h"
int _strlen(char *s);

/**
 * _strcpy - copy one src string to another dest string
 * @dest: the string to copy to
 * @src: the string to copy to
 * Return: the destination string's point.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int l;

	l = _strlen(src);
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
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

