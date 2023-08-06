#include <stdio.h>

int main(void) {
	int num, rev = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	while(num) {
		rev = (rev * 10) + (num%10);
		num /= 10;
	}
	printf("Result = %d\n", rev);
	return 0;
}
