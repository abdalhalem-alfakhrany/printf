#include "../main.h"
#include <stdio.h>
int main(void)
{
	int x, y;

	_printf("char test: c:%c h:%c\n", 'c', 'h');
	_printf("string test: ccc:%s hhh:%s\n", "ccc", "hhh");
	x = _printf("\ndouble percentage test:%% 1:% 2:%% %%");
	y = _printf("\ndouble percentage test: 1:% 2:%% %");
	printf("\nx = %d\n", x);
	printf("\ny = %d\n", y);
	return (0);
}
