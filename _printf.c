#include "main.h"

/**
 * handel_specifires - handel all specifires in tha format
 * @list: the vadriadic list
 * @format: the format to insert the spacifires values in
 * @str: the buffer
 * @size: pointer to size of str
 * Return: size of str buffer
 */
int handel_specifires(va_list *list, const char *format, char *str, int *size)
{
	int i = 0, j = 0, result = 1;
	specifier_handler handlers[] = {
		{'c', c_handler}, {'s', s_handler}, {'d', d_handler},
		{'i', i_handler}, {'b', b_handler}, {'r', U_handler},
		{'x', U_handler}, {'X', U_handler}, {'o', U_handler},
		{'u', U_handler}, {'S', c_handler}};

	if (!format || !list || !str)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			str[(*size)++] = format[i];
			i++;
			continue;
		}
		i++;
		result = percentage_handler(&str[*size], &format[i]);

		if (result == -1)
			return (-1);

		else if (result == -2)
		{
			i++;
			continue;
		}

		for (j = 0; ; j++)
		{
			if (handlers[j].specifier == 'S')
				break;
			if (handlers[j].specifier == format[i])
			{
				*size += handlers[j].handler(&str[*size], list), i++;
			}
		}
	}
	return (result);
}

/**
 * _printf - print the format wicht specifires passed in
 * @format: the format
 * Return: the size of buffer
 */
int _printf(const char *format, ...)
{
	va_list list;
	char str[1024];
	int str_size = 0, i, error_code;

	if (!format)
		return (-1);

	va_start(list, format);
	error_code = handel_specifires(&list, format, str, &str_size);
	va_end(list);

	for (i = 0; i < str_size; i++)
		putchar(str[i]);

	return ((error_code == -1) ? (-1) : (str_size));
}
