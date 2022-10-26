#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 *            of bytes from string src into dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)

{
int i, co;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (co = 0; co < n; co++)
{
dest[i + co] = src[co];
if (src[co] == '\n')
co = n;
}
return (dest);
}
