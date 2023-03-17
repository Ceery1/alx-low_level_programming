#include <stdio.h>
/**
* main - entry point
* Description: 'print single digit using puchar'
* Return: 0 is correct
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
