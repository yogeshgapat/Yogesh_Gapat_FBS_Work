#include<stdio.h>
void main()
{
	int no;
	printf("enter any number");
	scanf("%d",&no);
	if(no%3==0&&no%5==0)
	{
		printf("number is divisible by both numbers");
	}
	else
	if(no%3==0&&no%5!=0)
	{
		printf("number is divide by only 3");
	}
	else
	if(no%3!=0&&no%5==0)
	{
		printf("number is divisible by only 5");
	}
	else
     {
     	printf("number is not divided by both numbers");
	 }

}
