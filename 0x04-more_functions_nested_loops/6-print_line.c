#include "main.h"
#include <stdio.h>
/**
 * print_line - draw a straight line
 * @n: take integer
 * Return: 0
 */
void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0 ; i < n ; i++)
{
putchar (95);
}
putchar ('\n');
}
else
{
putchar ('\n');
}
}
