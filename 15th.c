//arithmetic operation 45,23,2,9,34 by user input
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	float result;
	printf("enter values:");	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	result=a+(b*c-d)/e;
	printf("result=%f",result);
	return 0;
}
