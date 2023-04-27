#include "../main.h"

int main()
{

	int len = _printf("\nchar \n\t 1 : %c\npersentag \n\t 1 : %% \nstring \n\t 1 : %s\n\t 2 : %s \n%", 'c', "str", "");
	printf("%d\n", len);
	return (0);
}
