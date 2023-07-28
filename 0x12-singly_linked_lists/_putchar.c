#include <unistd.h>

/**
 * _putchar - this writes the char c to stdout
 * @c: the char to print
 *
 * Return: Always return 1 on success
 * on error, -1 is returned, and errno is set properly
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
