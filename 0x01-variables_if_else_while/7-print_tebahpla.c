#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (succeed)
 */
int main(void)
{
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
