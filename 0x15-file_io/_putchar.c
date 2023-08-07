#include <unistd.h>

/**
 * _putchar - this will write the character c to stdout
 * @c: this is the character to print
 *
 * Return: Always return 1 on success
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
