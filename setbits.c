#include <stdio.h>

char * basecalc(int n, int b)
{
	static char buff[32];
	char *s = &buff[31];
	*s = '\0';
	while(n) 
	{
		*(--s) = "0123456789ABCDEF"[n%b];
		n = n/b;
	}
	return s;
}

int setbits(int n)
{
	int res = 0;
	while(n)
	{
		n = n & (n-1);
		res++;
	}
	return res;
}

int main(void)
{
	int n;
	printf("Enter num: ");
	scanf("%d",&n);
	printf("The num \"%d\" in binary: %s\n",n,basecalc(n,2));
	printf("The no. of set bits in num \"%d\" is: %d\n",n,setbits(n));
	return 0;
}
