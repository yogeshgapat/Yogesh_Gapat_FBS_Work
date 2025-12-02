#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter triangle sites");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&a==c)
	{
		printf("trangle is equilateral");
	}
	else
	if(a==b||b==c||a==c)
	{
		printf("trangle is isocales");
	}
	else
	{
		printf("triangle is scale");
	}
}
