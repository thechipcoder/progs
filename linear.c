#include <stdio.h>

#define DBG	1
#define ERR -1

int f_search(int arr[], int len, int key)
{
	int i;

	for(i=0; i<len; i++)
	{
		if(arr[i] == key)
			return i;
	}

	return ERR;
}

int main(void)
{
	int arr[] = {10, 20, 40, 50, 30, 80, 90, 60, 70};
	int len = sizeof(arr)/sizeof(int);
	int res = 0, key = 0;

#if DBG == 1
	int i;
	printf("Size of array = %d, Key = %d\n", len, key);
	printf("Array: ");
	for(i=0; i<len; i++)
		printf(" %d ", arr[i]);
	printf("\n");
#endif //DBG
	printf("Enter the key: ");
	scanf("%d", &key);

	res = f_search(arr, len, key);
	if(res == ERR)
		printf("ERR: No key found in array\n");
	else
		printf("Key found in array. Index = %d\n", res);

	return 0;	
}
