#include <stdio.h>


int main(void)
{
	int i;
	
	i = 1;
	putchar(i % 10 + '0');
	putchar(i / 10 + '0');
	putchar('\n');
	return (0);
}
