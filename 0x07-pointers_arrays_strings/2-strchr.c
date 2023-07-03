#include "main.h"
/**
 * _strchr - Here is the Entry point
 * @s: inputffi
 * @c: input
 * Return: Always return 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

