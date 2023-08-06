#include <stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubblesort(int *arr, int n)
{
	int i,j,swapped;
	for(i=0; i<n-1; i++)
	{
		swapped = 0;
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				swapped = 1;
			}
		}
		if(swapped == 0)
			break;
	}
}

void printarray(int *arr, int n)
{
	int i;

	printf("The array: ");
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int arr[32],n,i;

	printf("Enter the size of array: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	
	printarray(arr,n);
	bubblesort(arr,n);
	printarray(arr,n);

	return 0;
}
