#include "main.h"
/**
 * swap_int - swap integer
 * @a: pointer a
 * @b:pointer b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
