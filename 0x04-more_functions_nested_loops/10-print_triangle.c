#include "main.h"

/**
 * print_triangle - entry point
 * By Sebina Nong
 * Description: Prints diagonals
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = size - row; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
