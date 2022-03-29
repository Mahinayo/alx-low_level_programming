#include "main.h"
/**
 * _strspn - prefix
 * @s: char s
 * @accept: check string
 * Return: pointer
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0 ; s[i] ; i++)
{
for (j = 0 ; accept[j] ; j++)
{
if (s[i] == accept[j])
break;
}
if (!accept[j])
break;
}
return (i);
}
