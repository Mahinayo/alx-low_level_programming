#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates
 * @s1: char s1
 * @s2: char s2
 * @n: int n
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i;
while (s1[n] != '\0')
{
++n;
}
for (i = 0 ; s2[i] != '\0' ; ++i, ++n)
{
s1[n] = s2[i];
}
s1[n] = '\0';
return (s1);
}
