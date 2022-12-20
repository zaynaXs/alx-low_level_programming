/**
 * swap_int - swap the values of two pointers
 * @a: the first value to be swapped
 * @b: the second value to be swapped
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

