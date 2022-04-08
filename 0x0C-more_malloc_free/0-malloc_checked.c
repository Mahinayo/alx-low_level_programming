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
}
