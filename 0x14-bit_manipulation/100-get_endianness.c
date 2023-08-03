#include "main.h"

/**
 * get_endianness - this will check if a machine is little or big endian
 * Return: retrurn 0 for big and return 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

