#include "main.h"

/**
 * _puts - this program prints a string to stdout.
 * @str: this is the string to be printed
 * _putchar: this prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
