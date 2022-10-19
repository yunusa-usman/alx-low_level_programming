#include "main.h"

/**
 * print_times_table - Print times table for numbers 0-14
 * @n: An integer value input
 * Return: Nothing
 */
void print_times_table(int n)
{
	int a, b;

	if (n > 0 && n < 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
				putformat(a * b);
			_putchar('\n');
		}
	}
}
