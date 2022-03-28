#include "main.h"
/**
 * _memset - memory
 * @s: char s
 * @b: char b
 * @n: int n
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n ; i++)
{
*(s + i) = b;
}
return (s);
}
