#include "main.h"
/**
 * rev_string - function to call
 * @s: string to reverse
 *
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char temp;

	while (s[index++])
		length++;

	for (index = 0; index < length / 2; index++)
	{
		temp = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = temp;
	}
}
