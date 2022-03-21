#include "main.h"
#include <stdio.h>
/**
 * puts2 - every other char
 * @str: string
 * Return:0
 */
void puts2(char *str)
{
int i;
int a;
i = 0;
a = 0;
while (str[i++])
{
a++;
}
for (i = 0 ; i < a ; i += 2)
{
putchar(*(str + i));
}
putchar('\n');
}
