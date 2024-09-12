//week01-1.c copy to Colab
//soit106_base_002
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int d50=n/50;
	int d5=n%50/5;
	int d1=n%5/1;
	printf("%d %d %d %d\n",n,d50,d5,d1);
}