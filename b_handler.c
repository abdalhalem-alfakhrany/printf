#include "main.h"

/**
 * b_handler - handel b spacifier
 * @str: buffer to but chars in
 * @list: the number
 * Return: the count of char appended
 */
int b_handler(char *str, va_list *list)
{
	int x = va_arg(*list, int);
	int i, got_one, appended_count = 0, current_bit;

	for (i = 32; i >= 0; i--)
	{
		current_bit = x & (1 << i);

		if (current_bit)
			got_one = 1;

		if (got_one)
		{
			*str = (current_bit) ? '1' : '0';
			appended_count++;
			str++;
		}
	}

	return (appended_count);
}
