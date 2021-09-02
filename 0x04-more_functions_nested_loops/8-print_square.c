#include "main.h"

/**
 * print_square - prints '#' in square
 * @size: parameter for size
 * Return: none
 */

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 1; row <= size; row ++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
