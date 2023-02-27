#include<stdio.h>
//i code this program for undersitand relational operater expression 
//here given relational operaters are i reffered form c depth book
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	if (a<b)
	{
		printf("a=%d is less the b=%d\n",a,b); 
	}
	if (a<=b)
	{
		printf("a= %d is less then or equal to b= %d\n",a,b);
	}
	if (a==b)
	{
		printf("a= %d is equal to b= %d\n",a,b);
	}
	if (a!=b)
	{
		printf("a= %d is not equal to b= %d\n",a,b);
	}
	if (a>b)
	{
		printf("a= %d is greater then b= %d\n",a,b);
	}
	if (a>=b)
	{
		printf("a=%d is greater then or equal to b=%d\n",a,b);
	}
	return 0;
}
