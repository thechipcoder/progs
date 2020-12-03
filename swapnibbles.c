// Swap nibbles in a byte

#include <stdio.h>

char *basecalc(int num, int base) {
	static char buff[32];
	char *s = &buff[31];
	*s = '\0';
	while(num) {
			*(--s) = "0123456789ABCDEF"[num%base];
			num /= base;
	}
	return s;
}

int main(void) {
	 int x, res;
	printf("Enter the number: ");
	scanf("%d",&x);
	printf("Input number in hex:%s\n",basecalc(x,16));
	printf("Input number in binary: %s\n",basecalc(x,2));
	res = ((x & 0x0F)<<4) | ((x & 0xF0)>>4);
	printf("Nibbles swapped: %u\n",res);
	printf("Result in hex:%s\n",basecalc(res,16));
	printf("Result in binary: %s\n", basecalc(res,2));
	return 0;
}
