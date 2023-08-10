#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Write a function that allocates memory using malloc
 * @b: input intger
 * Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
