#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int digit = 0;
while (digit <= 9)
{
putchar('0' + digit);
digit++;
}
putchar('\n');
return (0);
}
