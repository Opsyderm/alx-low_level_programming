#include "main.h"

/**
 * _isalpha - This checks for alphabetic character
 * @c: this is the character to be checked
 * Return: 1 for alphabetic character or 0 for something else
 */

int _isalpha(int c)
{

if ((c >- 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
