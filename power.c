// Iterative power or Binary Exponentiation
// Every number can be written as sum of powers of 2

#include <stdio.h>

int power(int x, int n){
	int res = 1;
	while(n>0) {
		if(n % 2 != 0)
			res = res * x;
		x = x*x;
		n = n/2;
	}
	return res;
}

int main(void) {
	int x, n;
	printf("Enter x: ");
	scanf("%d",&x);
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Power(%d,%d) = %d^%d = %d\n",x,n,x,n, power(x,n));
	return 0;
}
