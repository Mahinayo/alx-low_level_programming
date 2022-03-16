#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: take integer
 * Return: the modular
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (n >= 0)
{
_putchar ('0' + last_digit);
}
else
{
last_digit = -1 * last_digit;
_putchar ('0' + last_digit);
return (0);
}
}
