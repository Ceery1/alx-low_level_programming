#include <stdio.h>

/**
* main - entry point
* Description: print all comination of 3 digits
* Return: 0 is correct
*/
int main(void)
{
	int i;
	int j;
	int y;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
		for (y = 2; y < 10; y++)
		{
			if (i < j && i != j)
			{
				if (j < y && j != y)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(y + '0');
					if (i == 7 && j == 8 && y == 9)
					{
						continue;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
