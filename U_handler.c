#include "main.h"
/**
 * U_handler - a temporary parabola
 * @str: the buffer
 * @list: variadic list
 * Return: 1
 */

int U_handler(char *str, va_list *list)
{
	(void) (list);
	*str = 'U';
	str++;
	return (1);
}
