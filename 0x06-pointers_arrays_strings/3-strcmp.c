#include "main.h"
/**
 * _strcmp - function to call
 * @s1: first parameter
 * @s2: second parameter
 * Return: 15 if s1 > s2 & -15 if s2 > s1 && 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int lengs1 = 0;
	int lengs2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		lengs1++;
	for (i = 0; s2[i] != '\0'; i++)
		lengs2++;
	if (lengs1 < lengs2)
		return (-15);
	else if (lengs1 > lengs2)
		return (15);
	else
		return (0);

}
