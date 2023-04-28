#include "main.h"

int U_handler(char *str, va_list *list)
{
	(void) (list);
	*str = 'U';
	str++;
	return (1);
}
