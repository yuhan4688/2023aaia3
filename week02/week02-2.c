//week02-2.c
#include <stdio.h>
int main()
{
	char s[100];
	scanf("%s",s);
	for(int i=0;s[i]!=0;i++){
		char c=s[i];
		if(c!='2') printf("%c",c);
	}
	printf("\n");
}