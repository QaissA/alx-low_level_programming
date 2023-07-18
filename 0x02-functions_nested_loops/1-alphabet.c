#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always success (0)
 */
void print_alphabet(void)
{
char letter = 'a';
while(letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

