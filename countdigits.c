#include <stdio.h>
#include <math.h>

int countDigit(long n)
{
		return(floor(log10(n)+1));
}

int main(void) 
{
	long int num;
	printf("Enter num: ");
	scanf("%ld", &num);
	printf("No. of digits in %ld is: %d\n",num, countDigit(num));
	return 0;
}

