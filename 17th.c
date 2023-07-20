//arithmetic operation 245,56,2,6 by user input
#include<stdio.h>
int main()
{
	int a,b,c,d,result;
	printf("enter values:");	
	scanf("%d %d %d %d",&a,&b,&c,&d);
	result=a-(b*c)+d;
	printf("result=%d",result);
	return 0;
}
