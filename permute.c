#include <stdio.h>
#include <string.h>

void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char *s, int i)
{
	static int counter = 0;
	int len = strlen(s);
	if(i ==  len-1)
	{
		printf("(%d) %s\n",++counter,s);
		return;
	}
	for(int j = i; j<len; j++) 
	{
		swap(&s[i],&s[j]);
		permute(s, i+1);
		swap(&s[j], &s[i]);
	}	
}

int main(void)
{
	char str[31];
	int len;

	printf("Input: ");
	scanf("%s",str);
	len=strlen(str);
	for(int i = 0; i < len; i++)
		printf("%c",str[i]);
	printf("\n");

	permute(str,0);

	return 0;
}
