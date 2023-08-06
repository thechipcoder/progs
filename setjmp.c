#include <stdio.h>
#include <setjmp.h>

jmp_buf buf;
int main(void)
{
	int x = 1;
	setjmp(buf);
	printf("Hello World\n");
	x++;
	if(x <= 5)
		longjmp(buf,1);
	return 0;	
}
