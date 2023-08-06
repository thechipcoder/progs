#include <stdio.h>
#include <string.h>

unsigned char pali(char *s)
{
	int counter = 0;
	int len = strlen(s);
	char *s2 = s+len-1;
	if(!*s) return 0;
	len = len/2;
	printf("len/2 = %d\n",len);
	while(*(s2--) == *(s++) /*&& *s*/ && len--)
	{
		printf("len = %d\n",len);
		printf("S2 = %c\n", *s2);
		printf("S = %c\n", *s);
		printf("Counter = %d\n", ++counter);
		printf("--------------\n");
	}
	printf("S2 = %c\n", *s2);
	printf("S = %c\n", *s);

	printf("++S2 = %c\n", *++s2);
	printf("--S = %c\n", *--s);
	--s2;
	++s;
	return (unsigned char)( (*(++s2) == *(--s)));
}

int main(void)
{
	char buff[35];

	fputs("Input string: ",stdout);
	fgets(buff, sizeof(buff), stdin);
	fflush(stdin);

	*(buff+strlen(buff)-1) = '\0';

	printf("Is the string \"%s\" palindrome: %s\n",buff,pali(buff)?"YES":"NO");

	return 0;

}

