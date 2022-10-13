#include <stdio.h>
/**
* main - Prints sizes
*
* Return: Always 0 (Success)
*/
int main(void)
{
char d;
int a;
long int b;
long long int c;
float f;
printf("Size of char: %lu bytes\n", (unsigned long)sizeof(d));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(a));
printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(b));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(c));
printf("Size of float: %lu byte\n", (unsigned long)sizeof(f));
return (0);
}
