#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
		putchar('\n');

	return (0);
}
