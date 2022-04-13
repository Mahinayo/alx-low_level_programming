#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print name
*@name: name
*Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
  putchar("%s\n", name);
}
int main(void)
{
  void (*f)(char *);
  f = print_name;
 return (0);
}
