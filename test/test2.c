#include "../main.h"

int main(void)
{
	int len = 0;
	len += _printf("char\n\t1 (c) : %c\n", 'c');
	len += _printf("persentag\n\t1 (%) : %% \n");
	len += _printf("string\n\t1 (str) : %s\n\t2 () : %s \n", "str", "");
	len += _printf("decimal\n\t1 (9023) : %d\n\t2 (-1239) : %d\n\t3 (0) : %d\n", 9023, -1239, 0);
	len += _printf("int\n\t1 (9023) : %i\n\t2 (-1239) : %i\n\t3 (0) : %i\n", 9023, -1239, 0);
	printf("%d\n", len);
	return (0);
}
