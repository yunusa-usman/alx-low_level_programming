#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
* main - Print positive_or_negative() function
*
* Return: Always (Success)
*/

int main(void)
{
int i;
srand(time(0));
i = rand() - RAND_MAX / 2;
if (i > 0)
printf("%d is positive\n", i);
else if (i == 0)
printf("%d is zero\n", i);
else
printf("%d is negative\n", i);
return (0);
/**
* main - Prints positive_or_negative() value
* Return: 0
*/

int i;
i = 0;
positive_or_negative(i);

return (0);
}
