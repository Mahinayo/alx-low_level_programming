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
if (argc > 1)
{
for (i = 1 ; i < argc ; i++)
x = atoi(argv[1]);
y = atoi(argv[2]);
mul = (x *y);
printf("%d\n", mul);
}
else
{
printf("ERROR\n");
}
printf("\n");
return (1);
}
