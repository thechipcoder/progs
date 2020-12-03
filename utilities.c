
#include "utilities.h"

// Base conversion function
char *basecalc(unsigned int num, unsigned int base) {
	static char buff[32];
	char *s = &buff[31];
	*s = '\0';
	while(num) {
		*(--s) = "0123456789ABCDEF"[num%base];
		num /= base;
	}
	return s;
}
