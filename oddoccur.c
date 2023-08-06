#include <stdio.h>

int oddoccur(int *arr, int n)
{
	int i, res = 0;
	for(i=0; i<n; i++)
		res = res ^ arr[i];
	return res;
}

int main()
{
	int arr1[] = {4,3,4,4,4,5,5};
	int arr2[] = {8,7,7,8,8};

	printf("The number occuring odd no. of times in array is: %d\n", oddoccur(arr2, 5));
	return 0;
}
