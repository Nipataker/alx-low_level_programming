#include <unistd.h>

/**
 * write the character c to stdout
 * @c: The character to print
 * Return: 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
