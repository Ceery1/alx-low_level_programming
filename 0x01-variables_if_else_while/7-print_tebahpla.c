#include <stdio.h>
/**
 * main - entry point
 * Description: use putchar to print reverse alphabet
 * Return: 0 correct
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; --i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
