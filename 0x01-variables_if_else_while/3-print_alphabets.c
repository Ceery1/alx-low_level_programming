#include <stdio.h>
/**
 * main - entry point
 * Description: 'output the alphabet in lower and uppercase using putchar'
 * Return: 0 correct
 */
int main(void)
{
	int i;
	int y;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
