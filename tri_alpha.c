#include <stdio.h>

int main(void)
{
	int a, b;

	for (a = 1; a <= 6; a++)
	{
		for (b = 1; b <= a; b++)
	   {
		       printf("%c ", a+64);
	   }
		printf("\n");
	}
}