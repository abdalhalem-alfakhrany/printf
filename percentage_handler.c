#include "main.h"

/**
 * percentage_handler - handel tow percentage signes
 * @str: string buffer
 * @list: variadic arguments
 * Return: the size of chars added
 */
int percentage_handler(char *str, va_list *list)
{
	(void) list;
	*str = '%';
	str++;
	return (1);
}
