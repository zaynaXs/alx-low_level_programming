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
 * puts_half - prints th esecond half of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int i;
	int j;
	int l;

	l = _strlen(str);
	if (l % 2 == 0)
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (j = (l - 1) / 2; j < l - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	_putchar('\n');
}

