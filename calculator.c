#include<stdio.h>
int main()
{
	char op;
	double a,b;
	printf("enter an operator(+), (-),(*),(/) :");
	scanf("%c", &op);
	printf("enter the value of a");
	scanf("%lf", &a);
	printf("enter the value of b");
	scanf("%lf", &b);
	switch (op)
	{
		case '+':
			printf("%lf + %lf = %lf",a,b,a+b);
			break;
		case '-':
			printf("%lf - %lf = %lf",a,b,a-b);
			break;
		case '*':
		        printf("%lf * %lf = %lf",a,b,a*b);
		        break;
		case '/':
			printf("%lf / %lf = %lf",a,b,a/b);
			break;
				
			
    }
  return 0;			
}
