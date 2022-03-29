#include "main.h"
/**
 * _memcpy - copy memory
 * @dest: destination
 * @src: source
 * @n: int
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0 ; i < n ; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
