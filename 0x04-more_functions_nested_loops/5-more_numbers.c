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
int f;
int s;
int r;
i = 0;
r = 0;
while (i < 10)
{
while (r <= 14)
{
if (r < 10)
{
s = r;
}
else
{
f = r / 10;
s = r % 10;
putchar (f + '0');
}
putchar (s + '0');
r++;
}
i++;
r = 0;
putchar ('\n');
}
}
