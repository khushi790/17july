//arithmetic operation 67,3,2,34,2,5 by user input
#include<stdio.h>
int main()
{
	int a,b,c,d,e,result;
	printf("enter values");	
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	result=a+b*c*(d-c*e);
	printf("result=%d",result);
	return 0;
}
