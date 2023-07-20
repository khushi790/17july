//modular 7,9 by user input
#include<stdio.h>
int main()
{
	int a,b;
	float modular;
	printf("enter value of a and b:");
	scanf("%d %d",&a,&b);
	modular=a%b;
	printf("modular of two numbers =%f",modular);
	return 0;
}
