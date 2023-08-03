#include <unistd.h>

/**
 * _putchar - this writes the character c to stdout
 * @c: this is the character to print
 *
 * Return: Return 1on success
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
