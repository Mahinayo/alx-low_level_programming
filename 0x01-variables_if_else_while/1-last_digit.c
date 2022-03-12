#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - printing last digit
 *
 *Return: always 0
 */
/*more headers goes there */

/*betty style doc for function main goes there */
int main(void)
{
int n;
int LastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there */
LastDigit = n % 10;
printf("Last digit of %d is %d and is ", n, LastDigit);
if (LastDigit > 5)
printf("greater than 5\n");
else if (LastDigit == 0)
printf("0\n");
else
printf("less than 6 and not 0\n");
return (0);
}
