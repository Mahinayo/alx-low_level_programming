#include "main.h"
/**
 *_strcmp - compare
 *@s1: string 1
 *@s2: string 2
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
int r = 0;
while (*s1 == *s2 && *s1 != '\0')
{
s1++;
s2++;
}
if (s1 != s2)
r = *s1 - *s2;
return (r);
}
