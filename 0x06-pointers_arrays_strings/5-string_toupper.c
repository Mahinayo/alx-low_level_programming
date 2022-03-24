#include "main.h"
/**
 * string_toupper - lowercase to uppercase
 * @n: char n
 * Return: 0
 */
char *string_toupper(char *n)
{
int i;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}
