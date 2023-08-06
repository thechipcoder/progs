#include <stdio.h>
#include <time.h>
#include <string.h>

unsigned char crypto_memcmp(unsigned char * a, unsigned char *b, unsigned int len)
{
		unsigned char r = 0;
		unsigned int i;

		for(i=0; i<len; i++)
		{
				r |= (a[i] ^ b[i]);
				printf("DBG: r=%d, i=%d\n", r, i);
		}

//		return r;
		return ((r | (unsigned char)-r) >> 7) ^ 1; 
}


int main(void)
{
	clock_t t;
	double time_taken;
	unsigned int i;

	unsigned char str1[300];
	unsigned char str2[300]; //  = "helloworld1";
	int result = 0;

	for(i=0; i<299; i++)
	{
			str1[i] = i;
			str2[i] = i;
	}


	printf("Testing crypto memcmp...\n");

	t = clock();
	result = memcmp(str1, str2, 290);
	t = clock() - t;
	time_taken = (double)t/CLOCKS_PER_SEC;
	printf("Time taken by memcmp = %f\n",time_taken);
	printf("Result memcmp = %d\n", result);

	t = clock();
	result = crypto_memcmp(str1, str2, 290);
	t = clock() - t;
	time_taken = (double)t/CLOCKS_PER_SEC;
	printf("Time taken by crypto_memcmp = %f\n",time_taken);
	printf("Result crypto_memcmp= %d\n", result);
		
	return 0;
}
