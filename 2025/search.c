/*
 * 4Feb25
 * thechipcoder
 * Search algorithms
 */

#include <stdio.h>

int linearsearch(int *arr, int len, int x);
int binarysearch(int *arr, int len, int x);
int binsear_recursive(int *arr, int low, int high, int x);
int binsear_iterative(int *arr, int low, int high, int x);

int main(void)
{
   int arr[] = {0,1,2,3,4,5}; // The array
   int len = 6; // The length of the array
   int res = -1;
   int x = 2; // Number to be searched in array

   // Test 1 linear search
   x = 2;
   res = linearsearch(arr, len, x);
   printf("The element %d is found in index: %d\n", x, res);

   // Test 2 linear search
   x = 6;
   res = linearsearch(arr, len, x);
   printf("The element %d is found in index: %d\n", x, res);

   // Test 3 linear search
   x = 5;
   res = linearsearch(arr, len, x);
   printf("The element %d is found in index: %d\n", x, res);

   // Test 2.1 binary search
   x = 5;
   res = binarysearch(arr, len, x);
   printf("Binary Search: The element %d is found in index: %d\n", x, res);

   // Test 2.2 binary search
   x = 2;
   res = binarysearch(arr, len, x);
   printf("Binary search: The element %d is found in index: %d\n", x, res);

   // Test 2.3 binary search
   x = 6;
   res = binarysearch(arr, len, x);
   printf("Binary search: The element %d is found in index: %d\n", x, res);
   return 0; // End of the program
}

int linearsearch(int *arr, int len, int x)
{
   int i, res=-1;

   for(i=0; i<len; i++)
   {
      if(x==arr[i])
      {
         res = i;
	 break;
      }
   }

   return res;
}

int binarysearch(int *arr, int len, int x)
{
   int low,high, res;
   low = 0; 
   high = len-1;
   //res = binsear_iterative(arr, low, high, x);
   res = binsear_recursive(arr, low, high, x);
   return res;
}

int binsear_recursive(int *arr, int low, int high, int x)
{
   if (low > high) return -1;
   int mid = (low + high)/2;
   if (arr[mid] == x) return mid;
   if (arr[mid] > x) return binsear_recursive(arr, low, mid-1, x);
   else return binsear_recursive(arr, mid+1, high, x);
}

int binsear_iterative(int *arr, int low, int high, int x)
{
   int mid = 0, res = -1, i=0;

   printf("DBG: Called binarysearch-iterative()\n"); 
   while (low <= high)
   {
      mid = (low + high)/2;
      printf("DBG: x=%d, i=%d, low = %d, mid = %d, high = %d\n",x, i++, low, mid, high);
      getchar();
      if(arr[mid] == x)  
      {
         res = mid;
         break;
      }
      else if(arr[mid] > x)
         high = mid-1;
      else 
         low = mid+1;
   }

   return res;
}
