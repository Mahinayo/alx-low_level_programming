#include "main.h"
#include <stdio.h>
/**
 * base10 - base 10
 * @n: int
 * Return: 0
 */
int base10(int n)
{
int base;
base = 10;
while (n > 0)
{
base *= 10;
n--;
}
return (base);
}
/**
 * print_number - print an integer
 * @n: int
 * Return: 0
 */
void print_number(int n)
{
int power;
power = base10(8);
if (n < 0)
{
putchar('-');
n *= -1;
}
if (n == 0)
putchar('0');
else
{
while (n / power == 0)
power /= 10;
while (power >= 1)
{
putchar((n / power) +'0');
n %= power;
power /= 10;
}
}
}
