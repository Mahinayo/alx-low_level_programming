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
int x;
int y;
int mul;
for (i = 1 ; i < 3 ; i++)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
mul = x * y;
printf("%d", mul);
}
printf("\n");
return (0);
}
