#include <stdio.h>

int main(void)
{
	unsigned int x = 11;
	printf("x in decimal d  = %d\n",x);
	printf("x in decimal u  = %u\n",x);
	x = ~x;
	printf("x in decimal d = %d\n",x);
	printf("x in decimal u = %u\n",x);
	return 0;
}
