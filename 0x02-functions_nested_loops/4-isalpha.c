#include"main.h"
/**
 * _isalpha - check if is a letter
 * @c: char to be checker
 * Return: 1 if is letter, 0 if not
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

