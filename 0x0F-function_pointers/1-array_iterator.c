#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print integer
 * @array: int array
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: 0
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if(array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i])
}
}
