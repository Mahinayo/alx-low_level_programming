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
int j;
s1 = (char *) malloc(n * sizeof(char));
s2 = (char *) malloc(n * sizeof(char));
if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
j = 0;
while (s1[j] != '\0')
{
++j;
}
for (i = 0 ; s2[i] != '\0' ; ++i, ++j)
{
s1[j] = s2[i];
}
s1[j] = '\0';
return (s1);
if (j >= i)
{
putchar(s2[i]);
}
}
