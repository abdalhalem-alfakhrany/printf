#include "../main.h"

int main()
{
	int len1, len2;
	printf(" ----- 1 -----\n");
	len1 = _printf("char : %c %%", 'c');

	printf("\n ----- 2 -----\n");
	len2 = _printf("char : %c %", 'c');
	putchar('\n');
	
	printf("1(9): %d\n2(-1): %d\n", len1, len2);
	return (0);
}
