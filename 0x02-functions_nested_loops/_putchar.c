#include <unistd.h>
/**
 * _putchar - print c to stdout
 * @c: character to print
 *
 * Return: correct output
 * on error, -1 is returned
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
