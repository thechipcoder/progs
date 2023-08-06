#include <stdio.h>


// Worst-case time complexity is O(n)
int isprime1(int n) {
	int i;
	if(n==1) return 0;
	for(i=2; i<n; i++)
		if(n%i==0)
			return 0;
	return 1;
}

int main(void) {
	int n=0;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("The number %d is: %s\n",n,isprime(n)?"PRIME":"Not PRIME");
	return 0;
}
