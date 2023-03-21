#include <stdio.h>


int main(void)
{
	int i, y;

	for (i = 0; i <= 20; i++)
	{
	for (y = i + 1; y <= 20; y++)
	{
	putchar(i % 10 + '0');
	putchar(y % 10 + '0');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
