/**
 * _strlen - get the length of the provide string
 * @s: the string to get length of
 * Return: the length of string;
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++ != 0)
	{
		len++;
	}
	return (len);
}

