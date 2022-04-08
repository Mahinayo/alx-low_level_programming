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
double *d;
int *a;
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
d = (double *) malloc(b * sizeof(double));
{
return (d);
}
if (c == NULL || i == NULL || f == NULL)
{
a = (int *) malloc(sizeof("98"));
return (a);
}
free(c);
free(i);
free(f);
free(d);
}
