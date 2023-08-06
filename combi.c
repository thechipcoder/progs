#include <stdio.h>
#include <math.h>

int arr[] = {9,10,11,12};

void bitbasedprint(int val, int n)
{
	int pos = n;
	while(pos)
	{
		if((val>>(pos-1)) & 1)
		{
			printf("%d ", arr[n-pos]);
		}
		pos--;	
	}	
	printf("\n");
}

int main(void) {
	int i, p;

	p = pow(2,4);
	for(i=0; i<p; i++)
	{
		printf("(%d)\t",i);
		bitbasedprint(i, 4);
	}

	return 0;
}
