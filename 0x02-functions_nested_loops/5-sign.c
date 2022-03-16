#include "main.h"
/**
 * print_sign - return 1 and +
 * @n: take char
 * Return: return 0 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else
if (n < 0)
{
_putchar ('-');
return (-1);
}
else
{
_putchar ('0');
return (0);
}
}
