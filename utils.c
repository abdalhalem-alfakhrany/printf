#include "main.h"

/*
	5^5
 	5 * 5 * 5 * 5 * 5 
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
