#include "main.h"
/**
 *print_sign - return 1 and print +
 *@n: take char
 *Return: 0 or -1 
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar ('+');
_putchar ('n');
}
else
if (n < 0)
{
return (-1);
_putchar ('-');
_putchar ('n');
}
else
{
return (0);
_putchar (0);
_putchar ('n')
}
}
