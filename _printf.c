#include "main.h"

int _printf(const char *format, ...)
{
	va_list list;
	char str[1024];
	int str_size = 0, i = 0, j = 0;
	
	specifier_handler handlers[] =
	{
		{'c', c_handler},
		{'S', c_handler}
	};

	if (!format)
		return (-1);

	va_start(list, format);
	/*TODO: may format ahs null char inside it use strlen to calculate size */
	while (format[i])
	{
		if (format[i] != '%')
		{
			str[str_size++] = format[i];
			i++;
			continue;
		}
		i++;
		if (format[i] == '%')
		{
			/*TODO: % may need to be scaped */
			str[str_size++] = '%';
			i++;
			continue;
		}
		for (j = 0; ;j++)
		{
			if (handlers[j].specifier == 'S')
				break;
			if (handlers[j].specifier == format[i])
			{
				str_size += handlers[j].handler(&str[str_size], &list);
				i++;
			}
		}
	}
	va_end(list);
	
	for (i = 0; i < str_size; i++)
		putchar(str[i]);

	return (str_size);
}
