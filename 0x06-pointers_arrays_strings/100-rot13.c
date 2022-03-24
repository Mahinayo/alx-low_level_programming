#include "main.h"
/**
 * rot13 - encode a string using rot13
 * @r: char r
 * Return: r
 */
char *rot13(char *r)
{
int i;
i = 0;
while (r[i] != '\0')
{
while ((r[i] >= 'a' && r[i] <= 'z') || (r[i] >= 'A' && r[i] <= 'Z'))
{
if ((r[i] >= 'a' && r[i] <= 'm') || (r[i] >= 'A' && r[i] <= 'M'))
r[i] += 13;
else
r[i] -= 13;
i++;
}
i++;
}
return (r);
}
