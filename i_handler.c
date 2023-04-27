#include "main.h"
/**
 * i_handler - handles i specifier
 * @str: buffer
 * @list: variadic list of args
 * Return: number of digits
 */

int i_handler(char *str, va_list *list)
{
	int x = va_arg(*list, int), number_size = 0, i = 0, mod = 0;
	char number[10];

	if (!str || !list)
		return (-1);

	if (x == 0)
	{
		*str = '0';
		str++;
		return (1);
	}
	else
	{
		if (x < 1)
		{
			x = -x;
			*str = '-';
			str++;
			number_size++;
		}

		while (x > 0)
		{
			mod = x % 10;
			x = x / 10;
			number[number_size++] = mod + '0';
		}
	}

	for (i = number_size - 1; i >= 0; i--)
	{
		*str = number[i];
		str++;
	}

	return (number_size);
}
