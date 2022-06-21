#include "main.h"
/**
* print_diagonal - print \
* @n: character int
* Return: 0
*/
void print_square(int size)
{
        int l, lin;

        for (l = 0; l <= size; l++)
        {
                for (lin = 0; lin < size; lin++)
                _putchar('#');
                _putchar('\n');
        }
        if (size < 0)
        _putchar('\n');
}
