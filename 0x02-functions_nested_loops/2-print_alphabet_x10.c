#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: NULL. It is a void function
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int n;

	while (i <= 9)
	{
		n = 'a';

		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}

		_putchar('\n');
		i++;
	}
}
