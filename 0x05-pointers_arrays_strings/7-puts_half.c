#include "main.h"
#include <stdio.h>
/**
 * puts_half - print half
 * @str: string
 * Return: 0
 */
void puts_half(char *str)
{
int i;
int j;
i = 0;
while (str[i])
i++;
j = i / 2;
if (i % 2)
j += i;
while (j < i)
{
putchar(str[j]);
j++;
}
putchar('\n');
}
