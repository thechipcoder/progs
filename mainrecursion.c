#include <stdio.h>

int main(void)
{
	static int counter = 1;
	printf("Hello World\n");
	if(counter == 5)
		return 0;
	counter++;
	main();
}
