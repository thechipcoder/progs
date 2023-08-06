#include <stdio.h>

int main(void)
{
		int a = 10, b = 500;
		int res = 0;

		res =  a * b % a;

		printf("Result = %d\n", res);

		unsigned char r = 0;
		int ret = 0;

		printf("r = %d\n", r);
		ret = ((r | (unsigned char)-r) >> 7) ^ 0  ;
		printf("value = %d\n", ret);

		return 0;
}
