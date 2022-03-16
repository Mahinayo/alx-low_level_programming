#include "main.h"
/**
 * print_times_table - 100 times table
 * @n: take integer
 * Return: correct result
 */
void print_times_table(int n)
{
int a;
int b;
int c;
for (a = 0 ; a <= n ; a++)
{
for (b = 0 ; b <= n ; b++)
{
c = a * b;
if (b != 0)
{
_putchar (' ');
_putchar (' ');
}
else
if (c < 10 && b != 0)
{
_putchar (' ');
_putchar (' ');
_putchar ((c % 10) + '0');
}
else
if (c >= 10 && c < 100)
{
_putchar (' ');
_putchar ((c / 10) + '0');
_putchar ((c % 10) + '0');
}
else (c >= 100 && b != 0)
_putchar ((c / 100) + '0');
_putchar ((c / 10) % 10 + '0');
_putchar ((c % 10) + '0');
}
_putchar ('\n');
}
}
