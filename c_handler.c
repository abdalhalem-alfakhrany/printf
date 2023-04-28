#include "main.h"
/**
 * c_handler - handles c specifier
 * @str: buffer
 * @list: variadic list
 * Return: 1
 */
int c_handler(char *str, va_list *list)
{
	int x = va_arg(*list, int);

	if (!str || !list)
		return (-1);
	*str = x;
	str++;
	return (1);
}
