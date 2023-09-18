#include <unistd.h>

/**
 * _putchar - this writes the char c to stdout
 * @c: This is the char to print
 *
 * Return: Return 1 On success
 * On error, -1 is returned, and errno is set properly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
