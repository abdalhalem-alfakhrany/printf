#include "main.h"
/**
 * c_handler - handles c specifier
 * @str: buffer
 * @list: variadic list
 * Return: 1
 */
int c_handler(char *str, va_list *list)
{
	*str = va_arg(*list, int);
	str++;
	return (1);
}
