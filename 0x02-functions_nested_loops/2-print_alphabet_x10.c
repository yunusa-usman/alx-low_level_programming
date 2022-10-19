#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - print alphabet in lower case 10 times
 *
 *Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;

	while (count++ <= 9)
	{

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	}
}
