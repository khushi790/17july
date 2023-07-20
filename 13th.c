//modular 4,2 by user input
#include<stdio.h>
int main()
{
	int a,b;
	float modular;
	printf("enter value of a and b:");
	scanf("%d %d",&a,&b);
	modular=a%b;
	printf("Modular of two numbers =%.2f",modular);
	return 0;
}
