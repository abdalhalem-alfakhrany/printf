#include "main.h"
#include <string.h>
/**
 * s_handler - handles s specifier
 * @str: buffer
 * @list: variadic list
 * Return: buffer added size
 */
int s_handler(char *str, va_list *list)
{
	char *arg;
	int l;

	if (!str || !list)
		return (-1);
	arg = va_arg(*list, char *);
	if (!arg)
	{
		char *n = "(null)";

		memcpy(str, n, 6);
		str += 6;
		return (6);
	}
	l = strlen(arg);
	memcpy(str, arg, l);
	str += l;
	return (l);
}
