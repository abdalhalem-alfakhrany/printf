#include "../main.h"
#include <stdio.h>
void main(void)
{
	_printf("char test: c:%c h:%c\n", 'c', 'h');
	_printf("string test: ccc:%s hhh:%s\n", "ccc", "hhh");
	int x = _printf("double percentage test: 1:% 2:%% %");
	printf("%d\n", x);
}
