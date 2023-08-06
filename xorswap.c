// Swap values of two variables

#include <stdio.h>

int main(void) {
	int x = 20, y = 10;
	printf("Initial values: x=%d, y=%d\n",x,y);
	x^=y;
	y^=x;
	x^=y;
	printf("XOR swapping: x=%d, y=%d\n",x,y);
	x = x+y;
	printf("DBG: x=x+y, value=%d\n",x);
	y = x-y;
	printf("DBG: y=x-y, value=%d\n",y);
	x = x-y;
	printf("DBG: x=x-y, value=%d\n",x);
	printf("Add swapping: x=%d, y=%d\n",x,y);
	return 0;
}
