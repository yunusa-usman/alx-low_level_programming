#include <stdio.h>
/**
* main - Prints sizes
*
* Return: Always 0 (Success)
*/
int main(void)
{
char charType;
int intType;
long int longType;
long long int longlongType;
float floatType;
printf("Size of char: %lu bytes\n", (unsigned long)sizeof(charType));
printf("Size of int: %lu bytes\n", (unsigned long)sizeof(intType));
printf("Size of long int: %lu bytes\n", (unsigned long)sizeof(longType));
printf("Size of long long int: %lu bytes\n", (unsigned long)sizeof(longlongType));
printf("Size of float: %lu byte\n", (unsigned long)sizeof(floatType));
return (0);
}
