#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, sum = 0;
	char a = s[0];

	while (a != '\0')
	{
		sum++;
		a = s[i++];
	}
	return (sum);
}
