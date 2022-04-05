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
(void)argv;
for (i = 0; i < argc ; i++)
printf("%d\n", i);
return (0);
}
