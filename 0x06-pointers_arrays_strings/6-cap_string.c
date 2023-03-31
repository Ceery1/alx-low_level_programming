#include "main.h"
/**
 * cap_string - function to call
 * @str: parameter to enter
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	while (!(str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
		if (str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == ')' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
