#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int indx1;
	int indx2;

	for (indx1 = 0; a[indx1][8]; indx1++)
	{
		for (indx2 = 0; indx2 < 8; indx2++)
			_putchar(a[indx1][indx2]);

		_putchar('\n');
	}
}
