#include <stdio.h>

int main(void)
{
	int a,b,c,d=0,x1=0,x2=0;
	printf("Enter a,b,c of quadratic equation ax2+bx+c=0: ");
	scanf("%d, %d, %d",&a,&b,&c);
	printf("a=%d, b = %d, c=%d\n",a,b,c);
	d=(b*b) - 4*a*c;
	printf("Descriminant d = %d\n",d);
	return 0;
}
