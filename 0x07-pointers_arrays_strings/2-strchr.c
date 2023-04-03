#include "main.h"
/**
 * _strchr - function to call
 * @s: string where to locate
 * @c: character to locate
 * Return: S
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (c == s[i])
			return (&s[i]);
	}
	return (0);
}
