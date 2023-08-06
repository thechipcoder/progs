#include <stdio.h>

int main(void) {
	int i = 0;
	printf("Hello world\n");
	for(i=0; i<20;i++)
	{
		printf("\a");
	}
	printf("Completed...\n");
	return 0;
}
