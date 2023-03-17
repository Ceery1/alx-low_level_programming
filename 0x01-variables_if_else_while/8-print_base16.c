#include <stdio.h>
/**
 * main - entry point
 * Description: print number base 16
 * Return: 0 correct
 */
int main(void)
{
	int i;
	int y;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
