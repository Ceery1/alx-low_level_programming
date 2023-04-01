#include "main.h"

/**
 * print_times_table - function to call
 * @n: n times tables
 */

void print_times_table(int n)
{
	int i, y, z, u, d, w;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (y = 0; y <= n; y++)
			{
				z = i * y;
				if (z > 9 && z < 100)
				{
					u = z % 10;
					d = (z - u) / 10;
					_putchar(44);
					_putchar(32);
					_putchar(d + '0');
					_putchar(u + '0');
				}
				else if (z > 99)
				{
					if (z >= 100 && z < 110)
					{
						w = z / 100;
						u = z % 100;
						d = u / 10;
						_putchar(44);
						_putchar(32);
						_putchar(w + '0');
						_putchar(d + '0');
						_putchar(u + '0');
					}
					else if (z >= 100)
					{
						w = z / 100;
						u = (z % 100) / 10;
						d = (z % 100) % 10;
						_putchar(44);
						_putchar(32);
						_putchar(w + '0');
						_putchar(d + '0');
						_putchar(u + '0');
					}
				}
				else
				{
					if (y != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
			}
			_putchar('\n');
			_putchar('\n');
		}
	}
}
