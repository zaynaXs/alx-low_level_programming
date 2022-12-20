#include <unistd.h>

/**
 *
 * Writes provided character to stdout
 * char c: the character to print to stdout
 * return 0: on success
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

