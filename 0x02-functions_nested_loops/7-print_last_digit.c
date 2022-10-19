#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Function that prints out the last digit of a number
 * @n: single integer input
 * Return: The last digit of num
*/
int print_last_digit(int n)
{
	int num;

	num = n % 10;

	if (num < 0)
	{
		num = (-1 * num);
	}
	_putchar(num + '0');

	return (num);
}
