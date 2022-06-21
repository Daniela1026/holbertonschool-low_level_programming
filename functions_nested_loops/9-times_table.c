#include "main.h"
/**
* times_table - multip
*
*/
void times_table(void)
{
	int n, c, r;

	for (n = 0; n <= 9; n++)
	{
		for (c = 0; c <= 9; c++)
		{
			r = n * c;
			if (c != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (c == 0)
			{
				_putchar('0');
			}
			else if (r >= 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			else if ((r < 10) && (c != 0))
			{
				_putchar(' ');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
