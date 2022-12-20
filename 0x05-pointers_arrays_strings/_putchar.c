#include <unistd.h>

/**
 * _putchar - Writes provided character to stdout
 * @c: the character to print to stdout
 * Return: 0 on success
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

