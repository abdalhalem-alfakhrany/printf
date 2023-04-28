#include "main.h"

/**
 * percentage_handler - handel tow percentage signes
 * @str: string buffer
 * @list: variadic arguments
 * Return: the size of chars added
 */
int percentage_handler(char *str, va_list *list, const char *format)
{
	/* "asdasfasf%%"
	 *			  ^
	 *			  |
	 * 
	 *
	 * "asdasfasf%%  asdas"
	 *			  ^
	 *			  |
	 * */

	(void) list;
	/* has a not null char after it */
	if ( *(format + 1) != '\0')
	{
		*str = '%';
		return (1);
	}
	else
	{
		return (-1);
	}
	return (1);
}
