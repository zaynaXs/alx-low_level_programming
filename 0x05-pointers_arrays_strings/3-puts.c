#include "main.h"

int _strlen(char *s);

/**
 * _puts - put an array of characters
 * @str: the string/array of char to put
 */

void _puts(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
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

