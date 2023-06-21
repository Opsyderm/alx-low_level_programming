#include <unistd.h>

/**
 * _putchar - this writes the c character to stdout
 * @c: this the character to print
 * Return: always return 1 on success
 * on error, -1 is returned, and error is set properly.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}

