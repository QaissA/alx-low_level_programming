#include<stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number to be checker
 * Return : 1 and + if number greater then zero, 
 * zero if number equal zero 
 * or -1 and - if number lower then zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
} else if (n == 0)
{
_putchar(48);
return (0);
} 
else
{
_putchar('-');
return (-1);
}
}
