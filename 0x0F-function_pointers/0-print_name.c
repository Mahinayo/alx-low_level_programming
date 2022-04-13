#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print name
*@name: name
*@f: pointer
*Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
 if (name == NULL || f == NULL)
 {
   return;
 }
  else
  {
    f(name);
  }
}
