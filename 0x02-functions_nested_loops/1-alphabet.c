#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int n = 'a';/*Variable to store the characters*/

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}

	_putchar('\n');
}
