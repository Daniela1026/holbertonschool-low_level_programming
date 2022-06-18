#include "main.h"
/**
* times_table - multip
*
*/
void times_table(void)
{
        int n;
        int mult;
        int resp;

        for (n = 0; n <= 9; n++)
        {
               _putchar('0');

                for (mult = 1; mult <= 9; mult++)
                {
                        resp = n * mult;
			_putchar(',');
                        _putchar(' ');

                        if (mult <= 0)
                        {
                        _putchar(' ');
                        }
                                else
                                {
                                        _putchar(resp / 10 + '0');

                                        _putchar(resp % 10 + '0');
                                }
                }
        _putchar('\n');
        }
}
