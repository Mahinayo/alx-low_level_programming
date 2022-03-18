#include "main.h"
#include <stdio.h>
/**
 * print_square - print a square
 * @size: the no of size
 * Return: 0
 */
void print_square(int size)
{
int i;
int n;
if (size > 0)
{
for (i = 0 ; i < size ; i++)
{
for (n = 0 ; n < size ; n++)
{
putchar (35);
}
putchar('\n');
}
}
else
{
putchar ('\n');
}
}
