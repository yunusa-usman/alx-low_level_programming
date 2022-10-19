#include "main.h"
/**
 * _isalpha -This funtion checks for alphabetic character
 * @c: the char to check
 * Return: 1 if c is an upper or lower case letter, otherwise return 0
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
