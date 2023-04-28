#include "../main.h"
#include <stdio.h>
int main(void)
{
	int x;

	_printf("char test: c:%c h:%c\n", 'c', 'h');
	_printf("string test: ccc:%s hhh:%s\n", "ccc", "hhh");
	x = _printf("double percentage test: 1:% 2:%% %%");
	_printf("\n%d\n", x);
	return (0);
}
