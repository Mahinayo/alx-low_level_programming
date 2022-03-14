#include <stdio.h>
/**
 *main - print alphabets without e and q
 *
 *Retunr: always 0
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
if (c == 'e')
continue;
else if (c == 'q')
continue;
putchar (c);
}
putchar ('\n');
return (0);
}
