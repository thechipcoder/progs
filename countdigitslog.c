#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	printf("Enter the num: ");
	scanf("%d",&n);
	if(n==0)
		printf("No. of digits in 0: 1\n");
	else
		printf("No. of digits in %d: %0.0f\n",n,floor(log10(n)+1));
	return 0;
}
