#include <stdio.h>

/**
 * main - entry point
 * Description: print single digit and coma and space
 * Return: 0 correct
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

