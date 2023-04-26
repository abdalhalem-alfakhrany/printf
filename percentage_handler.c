#include "main.h"

int percentage_handler(char *str,va_list *list)
{
	(void) list;
	*str = '%';
	str++;
	return (1);
}
