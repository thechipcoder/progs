#include <stdio.h>

int trail(int n)
{
	int res = 0, i;

	for(i=5; i<=n; i=i*5)
		res = res + (n/i);
	return res;
}

int main(void)
{
	int n;
	printf("Enter num: ");
	scanf("%d",&n);
	printf("No. of trailing zeros in factorial of %d: %d\n",n, trail(n));
	return 0;
}
