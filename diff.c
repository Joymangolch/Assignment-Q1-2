#include<stdio.h>
int sum();
int sub();
int mul();
int main()
{
	sum();
	sub();
	mul();
}
int sum()
{
	int a,b,res;
	printf("\n enter the value of a&b :");
	scanf("%d %d",&a,&b);
	res=a+b;
	printf("the sum is : %d",res);		
}
int sub()
{
	int a,b,res;
	printf("\n enter the value of a&b :");
	scanf("%d %d",&a,&b);
	res=a-b;
	printf("the sub is : %d",res);	
}
int mul()
{
	int a,b,res;
	printf("\n enter the value of a&b :");
	scanf("%d %d",&a,&b);
	res=a*b;
	printf("the prod is : %d",res);		
}
