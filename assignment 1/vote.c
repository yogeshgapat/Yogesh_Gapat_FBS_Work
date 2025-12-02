#include<stdio.h>
void main()
{
	int age;
	printf("enter age of person");
	scanf("%d",&age);
	if(age>18)
	{
		printf("person is eligible");
	}
	else
	{
		printf("person is not eligible");
	}
}
