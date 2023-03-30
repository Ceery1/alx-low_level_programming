#include "main.h"

/**
 * _strcmp - function to call
 * @s1: first parameter
 * @s2: second parameter
 * Return: z
 */
int _strcmp(char *s1, char *s2)
{
	int i, z;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	z = s1[i] - s2[i];
	return (z);
}
