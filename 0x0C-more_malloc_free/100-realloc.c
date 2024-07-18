#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with malloc(old_size)
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

min_size = old_size < new_size ? old_size : new_size;
for (i = 0; i < min_size; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);

free(ptr);
return (new_ptr);
}

