#include <stdio.h>

int main(void) {

#if __STDC_VERSION__ >= 201112L
		printf("C11 supported\n");
#else
		printf("C11 is not supported\n");
#endif
		return 0;
		
}
