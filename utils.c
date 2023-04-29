#include "main.h"

/*
 * _pow - power
 * @base: base
 * @exponent: the power
 * Return: the result
 */

int _pow(int base, int exponent)
{
	int i, res = 1;

	if (base == 0)
		return (0);

	for (i = 0; i < exponent; i++)
		res *= base;

	return (res);
}
