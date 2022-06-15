#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	unsigned int x, y;
	size_t len, add;
	char *z = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = z[(len ^ 59) & 63];
	for (x = 0, add = 0; x < len; x++)
		add += argv[1][x];
	p[1] = z[(add ^ 79) & 63];
	for (x = 0, y = 1; x < len; x++)
		y *= argv[1][x];
	p[2] = z[(y ^ 85) & 63];
	for (y = argv[1][0], x = 0; x < len; x++)
		if ((char)y <= argv[1][x])
			y = argv[1][x];
	srand(y ^ 14);
	p[3] = z[rand() & 63];
	for (y = 0, x = 0; x < len; x++)
		y += argv[1][x] * argv[1][x];
	p[4] = z[(y ^ 239) & 63];
	for (y = 0, x = 0; (char)x < argv[1][0]; x++)
		y = rand();
	p[5] = z[(y ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
