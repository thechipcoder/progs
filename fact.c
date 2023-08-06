#include <stdio.h>

int fact1(int n)
{
	int res = 1, i;

	for(i = 2; i <= n; i++)
		res = res * i;

	return res;
}

int fact2(int n)
{
	if(n == 0)
		return 1;
	return n*fact2(n-1);
}

int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("(Iter)Factorial of %d = %d\n",n, fact1(n));
	printf("(Recu)Factorial of %d = %d\n",n, fact2(n));
	return 0;
}
