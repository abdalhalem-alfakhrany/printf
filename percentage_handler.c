#include "main.h"

/**
 * percentage_handler - handel tow percentage signes
 * @str: string buffer
 * @format: format string
 * Return: the size of chars added
 */
int percentage_handler(char *str, const char *format)
{
	if (*(format + 1) == '\0')
		return (-1);

	/*"asdasdas %%"*/
	if (*(format + 1) == '%')
	{
		*str = '%';
		return (1);
	}

	return (0);
}
