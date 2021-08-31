#include "main.h"
/**
 * _abs(int i) computes the absolute value of an integer
 * @i: The integer to be computed
 * Return: i (the absolute value of i
*/
int _abs(int i)
{
	if (i > 0)
		return (i);

	else if (i < 0)
		return (-i);

	else
		return 0;
}
