//divide 45,5 by user input
#include<stdio.h>
int main()
{
	int a,b;
	float div;
	printf("enter value of a and b:");
	scanf("%d %d",&a,&b);
	div=a/b;
	printf("division of two numbers=%.2f",div);
	return 0;
}
