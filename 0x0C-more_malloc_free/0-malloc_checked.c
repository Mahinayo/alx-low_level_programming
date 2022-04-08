#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocate memory
 * @b: unsigned int b
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
char *c;
int *i;
float *f;
int a = 98;
c = (char *) malloc(b * sizeof(char));
{
return (c);
}
i = (int *) malloc(b * sizeof(int));
{
return (i);
}
f = (float *) malloc(b * sizeof(float));
{
return (f);
}
if (c == NULL || i == NULL || f == NULL)
{
putchar(a);
}
free(c);
free(i);
free(f);
}
