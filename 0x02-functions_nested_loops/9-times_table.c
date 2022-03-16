#include "main.h"
/**
 * times_table - print 9 time table
 *
 * Return: always 0
 */
void times_table(void)
{
int a;
int b;
int c;
for (a = 0 ; a <= 9 ; a++)
{
for (b = 0 ; b <= 9 ; b++)
{
c = a *b;	
while  (a == 0 || b == 0)
{
_putchar ('0');
a++;
b++;
}
_putchar ('0' + c / 10);
_putchar ('0' + c % 10);
_putchar (',');
_putchar (' ');
}
if (b == 9)
_putchar ('0' + c / 10);
_putchar ('0' + c % 10);
_putchar (',');
_putchar (' ');
_putchar ('\n');
}
}
