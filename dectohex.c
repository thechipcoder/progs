// Date: Dec3,2020
// Author: vinod@thechipcoder.com
// Description: Convert decimal numbers to hexadecimal

#include <stdio.h>

// Function prototype declaration
char *baseconverter(int num, int base);

// Base convertor
char *baseconverter(int num, int base) {
	static char buff[32];
	char *s = &buff[31];
	*s = '\0';
	
	while(num) {
		*(--s) = "0123456789ABCDEF"[num%base];
		num /= base;
	}
	return s;
}

// Main function
int main(void) {
	int num;
	printf("Enter decimal number: ");
	scanf("%d", &num);
	printf("The number %d in hexadecimal is: %s\n",num, baseconverter(num,16));
	return 0;
}
