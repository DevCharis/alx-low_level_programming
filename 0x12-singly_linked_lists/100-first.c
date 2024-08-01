#include <stdio.h>

/**
 * print_before_main - Function that prints a specific message before main.
 *
 * Description: This function is executed before the main function due to
 *              its use of the constructor attribute. It prints the following
 *              message: "You're beat! and yet, you must allow,\n
 *              I bore my house
 *              upon my back!\n".
 */
void print_before_main(void) __attribute__ ((constructor));

void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

