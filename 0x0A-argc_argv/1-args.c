#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return:0
 */
int main(int argc, char **argv)
{
int i;
int a;
for (i = 0; i < argc ; i++)
a = i;
printf("%d\n", a);
(void)argv;
return (0);
}
