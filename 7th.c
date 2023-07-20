//multiply 2.2,6 by user input
#include<stdio.h>
int main()
{
	float a,product;
	int b;
	printf("enter value of a and b:");
	scanf("%f %d",&a,&b);
	product=a*b;
	printf("Multiplication of two numbers =%.2f",product);
	return 0;
}
