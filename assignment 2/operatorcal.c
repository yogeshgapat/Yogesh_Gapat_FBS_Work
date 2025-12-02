#include<stdio.h>
void main()
{
	int a,b,res;
	char op;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf(" enter any operator from this + - * % / :");
	scanf(" %c",&op);
	if(op=='+')
	{
		printf("\nres=%d",a+b);
	}
	else
	if(op=='-')
	{
		printf("\nres=%d",a-b);
	}
	else
	if(op=='*')
	{
		printf("\nres=%d",a*b);
	}
	else
	if(op=='/')
	{
		printf("\nres=%d",a/b);
	}
	else
	if(op=='%')
	{
		printf("\nres=%d",a%b);
	}
	else
	{
		printf("invalid operator");
	}
}
