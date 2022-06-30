#include "main.h"
/**
* print_chessboard - print chessboard
* @a: Character char pointer
*
*/
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int n;

	while (i < 8)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[i][n]);
		}
		_putchar('\n');
		i++;
	}
}
