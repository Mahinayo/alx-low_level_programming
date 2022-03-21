#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverse string
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
int i;
int n;
for (i = ; s[i] != '\0' ; i++)
{
continue;
}
n = i - 1;
for (i = n ; i >= 0 ; i--)
{
putchar(s[i]);
}
putchar('\n');
}
