#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints combinations of numbers
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
int a;
for (a = 0; a <= 9; a++)
	{
	    putchar((a % 10) + '0');
	if (a == '9')
		continue;
	putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
