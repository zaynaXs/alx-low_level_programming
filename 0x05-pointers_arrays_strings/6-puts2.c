#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: string to get the length of
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 * puts2 - print every other letter of a string
 * @str: string to print
 */

void puts2(char *str)
{
	int i;
	int l;

	l = _strlen(str);
	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

