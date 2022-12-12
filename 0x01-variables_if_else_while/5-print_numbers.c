#include <stdio.h>
/**
 *main - print numbers from 0 t0 9
 *
 *description: Will print out numbers from 0 to 9
 *Return: 0
 */
int main(void)
{
        char a = '0';

        while (a <= '9')
        {
                putchar(a);
                a++;
        }

        putchar('\n');
        return (0);
}
