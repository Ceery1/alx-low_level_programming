#include <stdio.h>
/**
 * main - entry point
 * Description: use putchar to print the alphabet
 * Return: 0 correct
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
