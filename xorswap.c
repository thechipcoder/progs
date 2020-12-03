// Swap values of two variables

#include <stdio.h>

int main(void) {
	int x = 10, y = 20;
	printf("Initial values: x=%d, y=%d\n",x,y);
	x^=y;
	y^=x;
	x^=y;
	printf("XOR swapping: x=%d, y=%d\n",x,y);
	x = x+y;
	y = x-y;
	x = x-y;
	printf("Add swapping: x=%d, y=%d\n",x,y);
	return 0;
}
