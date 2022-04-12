#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array
 * @size: size
 * @c: char c
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
char *s;
int i;
size = 0;
s = (char*) malloc(size * sizeof(char));
*s = "hello";
if (size == 0)
{
return (NULL);
}
else
if (s == NULL)
{
return (NULL);
}
for (i = 0 ; i <= size ; ++i)
{
s[i] = i + 1;
}
return (s);
}
