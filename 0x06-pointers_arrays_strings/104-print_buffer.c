#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * print_buffer - Prints a buffer
 * @b: The buffer to be printed
 * @size: The size of the buffer
 */

void print_buffer(char *b, int size)
{
int offset, i;

if (size <= 0)
{
putchar('\n');
return;
}

for (offset = 0; offset < size; offset += 10)
{
printf("%08x: ", offset);

for (i = 0; i < 10; i++)
{
if (i + offset < size)
printf("%02x", b[offset + i]);
else
printf("  ");
if (i % 2)
putchar(' ');
}

for (i = 0; i < 10; i++)
{
if (i + offset < size)
putchar(isprint(b[offset + i]) ? b[offset + i] : '.');
}

putchar('\n');
}
}
