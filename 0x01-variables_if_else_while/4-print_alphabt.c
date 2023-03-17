#include <stdio.h>
/**
* main - entry point
* Description: use putchar to print the alphabet except q and e
* Return: 0 correct
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
