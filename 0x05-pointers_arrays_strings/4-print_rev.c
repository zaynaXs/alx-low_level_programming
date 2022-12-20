#include "main.h"
int _strlen(char *s);

/**
 * print_rev - print characters of a string in reverse order
 * @s: the string to reverse
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (--i >= 0)
	{
		_putchar(s[i]);
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

