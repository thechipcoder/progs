#include <stdio.h>

char *basecalc(int num, int base)
{
	static char buff[32] = {};
	char *s = &buff[31];
	*s = '\0';
	while(num) {
		*(--s) = "0123456789ABCDEF"[num%base];
		num /= base;
	}
	return s;

}

void updatereg(int *reg, int bitpos, int nofbits, int value)
{
	int mask = ~(~0<<nofbits) << bitpos;
	*reg = (*reg & ~mask) | ((value << bitpos)&mask);
}

int main(void)
{
	int reg = 0x93;
	int bitpos = 3;
	int nofbits = 2;
	int value = 3;

	printf("Current reg value: %sb\n",basecalc(reg,2));
	printf("Current reg value: %sh\n",basecalc(reg,16));
	printf("Current reg value: %sd\n",basecalc(reg,10));
	updatereg(&reg,bitpos,nofbits,value);
	printf("Updated reg value: %sb\n",basecalc(reg,2));
	printf("Updated reg value: %sh\n",basecalc(reg,16));
	printf("Updated reg value: %sd\n",basecalc(reg,10));

	return 0;
}
