//arithmetic operations 2,34,12,34 by user input
#include<stdio.h>
int main()
{
	int a,b,c,result;
	printf("enter values:");	
	scanf("%d %d %d",&a,&b,&c);
	result=a+b*c-(b);
	printf("result=%d",result);
	return 0;
}
