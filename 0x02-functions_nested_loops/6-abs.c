#include "main.h"
/**
 * _abs - absolute value
 *@n: take integer
 *Return: always 0
 */
int _abs(int n)
{
if (n < 0)
{
return (n * (-1));
}
else
if (n > 0)
{
return (n);
}
else
{
return (0);
}
}
