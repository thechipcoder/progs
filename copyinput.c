#include <stdio.h>

int main(void)
{
	int c;

	while((c = getchar()) != EOF)
	{
		if (c == EOF)
			break;
		if (c == 'q')
			break;
		putchar(c);
	}
	printf("Exit...\n");
	return 0;
}
