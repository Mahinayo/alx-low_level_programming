#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print more numbers
 *
 * Return: 0
 */
void more_numbers(void)
{
int i;
int n;
for (n = 1 ; n <= 10 ; n++)
{
for (i = 0 ; i <= 14 ; i++)
{
if (i >= 14)
{
putchar (i / 10 + '0');
}
putchar (i % 10 + '0');
}
putchar ('\n');
}
}
