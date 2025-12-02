#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		printf("a=%d",a);
	}
	else
	if(b>c)
	{
		printf("b=%d",b);
	}
	else
	{
		printf("c=%d",c);
	}
	
}
