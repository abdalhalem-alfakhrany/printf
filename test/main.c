#include "../main.h"
#include <stdio.h>
void main(void)
{
	char *r, *s;
	_printf("char test: c:%c h:%c\n", 'c', 'h');
	_printf("string test: ccc:%s hhh:%s  :%s%s\n", "ccc", "hhh", r, s);
	int x = _printf("double percentage test: 1:% 2:%% %", "ccc", "hhh");
	printf("\n%d\n", x);
}
