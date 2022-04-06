#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
int sum;
sum = 0;
if (argc < 2)
{
printf("0\n");
}
if (argc > 1)
{
for (i = 1 ; i < argc ; i++)
{
sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
return (0);
}
