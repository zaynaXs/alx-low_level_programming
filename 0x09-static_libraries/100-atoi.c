#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 * Return: the int rep of the string
 */

int _atoi(char *s)
{
	int c;
	int min;
	int isi;
	unsigned int ni;

	c = 0;
	ni = 0;
	min = 1;
	isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}
		c++;
	}
	ni *= min;
	return (ni);
}

