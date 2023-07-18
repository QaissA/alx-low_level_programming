#include "main.h"
/**
 * print_sign - check if n is greater or less or equal zero
 * @n: the number to be checker
 * Return : 1 and + if number greater then zero, zero if number equal zero or -1 and - if number lower then zero
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
} else if (n == 0)
{
printf("0");
return (0);
} else
{
printf("-");
return (-1);
}
}
