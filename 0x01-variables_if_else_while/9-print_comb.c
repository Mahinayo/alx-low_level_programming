#include<stdio.h>
/**
 * main - print combination
 *
 * Return: always 0
 */
int main(void)
{
int c;
for (c = '0' ; c <= '9' ; c++)
{
putchar (c);
if (c == '9')
{
break;
}
putchar (',');
putchar (' ');
}
putchar ('\n');
return (0);
}
