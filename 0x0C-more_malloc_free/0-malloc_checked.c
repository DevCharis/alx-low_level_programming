#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Description: This function allocates memory using malloc and
 *              terminates the process with status value 98 if
 *              the memory allocation fails.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

