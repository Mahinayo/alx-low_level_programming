#include <stdlib.h>
#include <stdio.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int mul;
mul = 0;
if (argc > 2)
{
printf("ERROR\n");
return (1);
}
else
{
for (i = 1 ; i < argc ; i++)
mul = mul * atoi(argv[i]);
printf("%d\n", mul);
return (0);
}
}
