#ifndef FUNCTION_POINTERS_H 
#define FUNCTION_POINTERS_H
/**
* struct function_pointers - function pointers
*@name: name of the person
*Description: structur with name
**/
typedef struct function_pointers
{
  char *name;
}function_pointers_t;

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
