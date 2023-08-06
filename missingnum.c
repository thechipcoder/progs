#include <stdio.h>

int missnum(int *arr, int n)
{
	int res = 0, i;
	for(i=0; i<=n; i++)
	{
		if (i<n)
			res = res ^ arr[i] ^ (i+1);
		else
			res = res ^ (i+1);
	}
	return res;
}

int main(void)
{
	int arr[] = {1, 5, 3, 2};

	printf("Missing number in array: %d\n", missnum(arr, 4));
	return 0;
}
