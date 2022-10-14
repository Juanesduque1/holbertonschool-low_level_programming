#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 *main - Print FizzBuzz program
 *Description: Program of task 9
 *Return: FizzBuzz
 */

int main(void)
{
int i;

for (i = 0; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else
printf("%i", i);
}
return (0);
}
