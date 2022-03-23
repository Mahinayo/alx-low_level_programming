#include "main.h"
#include <string.h>
/**
 *_strncat - concatenate
 *@dest: destination
 *@src: source
 *Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i = strlen(dest);
int a = 0;
while (a < n && *src)
{
dest[i + a] = *src;
src++;
a++;
}
dest[i + a] = '\0';
return (dest);
}
